#include <ios>
#include <iostream>
#include <algorithm>


bool validAnagram(std::string s, std::string t);
void tesValidAnagram(std::string s, std::string t, bool expected);


int main()
{

tesValidAnagram("test", "ttes", true);
tesValidAnagram("false", "true", false);
tesValidAnagram("anagram", "nagaram", true);
tesValidAnagram("felix", "charlotte", false);

  return 0;
}


bool validAnagram(std::string s, std::string t)
{
  std::sort(s.begin(), s.end());
  std::sort(t.begin(), t.end());

  if (s == t)
    return true;

  return false;
}




void tesValidAnagram(std::string s, std::string t, bool expected)
{
  bool result = validAnagram(s, t);
  std::cout << "Input:" << s << std::endl;
  std::cout << s << std::endl;
  std::cout << "Expected: "<<std::boolalpha << expected << std::endl;
  std::cout << "Result: "<< std::boolalpha << result << std::endl;
  if (result == expected) {
    std::cout << "Success!";
  } else {
    std::cout << "Failed..";
  }

  for (int i = 0; i < 2; i++)
    std::cout << std::endl;
}




