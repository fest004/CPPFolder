#include <iostream>
#include <string>

using namespace std;

int main() {
  string name = "Charlotte";
  cout << name << endl;
  name.pop_back(); // Removes last char of string
  cout << name << endl;
  name += "e"; // Adds e back

  // Search and replace
  string replacee = "lotte";
  name.replace(name.find(replacee), replacee.length(), "lie");
  cout << name << endl;

  name = "Charlotte er digg";
  // Substring
  cout << name.find_first_of("digg");

  return 0;
}
