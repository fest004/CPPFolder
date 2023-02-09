#include <iostream>
#include <vector>
#include <unordered_set>


bool containsDuplicate(std::vector<int>& nums);


int main() 
{

  std::vector<int> case0v = {1, 2, 3, 1};
  std::vector<int> case1v = {1, 2, 3, 4};
  std::vector<int> case2v = {1, 2, 3, 1, 5, 1, 59, 3};
  bool case0b = containsDuplicate(case0v);
  bool case1b = containsDuplicate(case1v);
  bool case2b = containsDuplicate(case2v);
  std::cout << std::boolalpha << case0b << std:: endl;
  std::cout << std::boolalpha << case1b << std:: endl;
  std::cout << std::boolalpha << case2b << std:: endl;
  return 0;
}
  

bool containsDuplicate(std::vector<int>& nums)
{
  std::unordered_set<int> s;

  for (int i = 0; i < nums.size(); i++) {
    if(s.find(nums[i]) != s.end()){
      return true;
    }
      s.insert(nums[i]);
  }
  return false;
}
