#include <iostream>
#include <stack>
#include <unordered_map>

bool validParenthesis(std::string s);
void testValidParenthesis(const std::string& s, bool expected);

int main() 
{ 
testValidParenthesis("()", true);
    testValidParenthesis("()[]{}", true);
    testValidParenthesis("(]", false);
    testValidParenthesis("([)]", false);
    testValidParenthesis("{[]}", true);

}

bool validParenthesis(std::string s) {
  std::unordered_map<char, char> rightKeyMap; // RightParenthesis : LeftParenthesis

  // Creating map to compare to expected parenthesis 
  rightKeyMap.emplace(')', '(');
  rightKeyMap.emplace('}', '{');
  rightKeyMap.emplace(']', '[');


  // Create stack to keep track of order of left parenthesis
  std::stack<char> stackOrder;

  for (auto const c : s) {
    // if it is a right side parenthesis
    if (rightKeyMap.find(c) != rightKeyMap.end()) {

      // If there is no left side to pair with the left one in the stack, it is false
      if (stackOrder.empty()) {
        return false;
      }

      // If the top most left parenthesis in the stack does not match the current
      // left one, return false
      if (stackOrder.top() != rightKeyMap[c]) {
        return false;
      }

      // if all goes well, pop the top of the stack
      stackOrder.pop();
    } else {
      // If it is a left side parenthesis, push it to the stack
      stackOrder.push(c);
    }
  }
  // If loop finishes without returning false, it returns true

  return true;
}


void testValidParenthesis(const std::string& s, bool expected) {
    bool result = validParenthesis(s);
    std::cout << "Input: " << s << std::endl;
    std::cout << "Expected Output: " << (expected ? "true" : "false") << std::endl;
    std::cout << "Actual Output: " << (result ? "true" : "false") << std::endl;
    std::cout << std::endl;
}
