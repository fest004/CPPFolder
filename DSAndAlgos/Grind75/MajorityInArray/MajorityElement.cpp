#include <iostream>
#include <unordered_map>
#include <vector>


int majorityElement(const std::vector<int> &nums);
void testMajorityElement(std::vector<int> nums, int expected);


int main()
{
  testMajorityElement({1, 2, 2, 3, 2}, 2);
  testMajorityElement({1, 2, 3, 3, 2}, -1);
  testMajorityElement({5, 2, 5, 5, 5, 3, 4, 5, 5, 5}, 5);
  return 0;
}


int majorityElement(const std::vector<int> &nums)
{
  std::unordered_map<int, int> map; // Number : Count

  for (int i = 0; i < nums.size(); i++)
  {
    if (map.find(nums[i]) != map.end())
    {
      map[nums[i]] += 1;
      if (map[nums[i]] > nums.size() / 2) return nums[i];
    } else {
      map.emplace(nums[i], 1);
    }
  }


  //If there is no majority, return -1
  return -1;
}

void testMajorityElement(std::vector<int> nums, int expected)
{
  int result = majorityElement(nums);
  std::cout << "Input:" << std::endl;
  for (auto i : nums)
    std::cout << i << std::endl;

  std::cout << "Expected output: " << expected << std::endl;
  std::cout << "Output: " << result << std::endl;
  if (result == expected)
    std::cout << "Success" << std::endl;
  else 
    std:: cout << "Failure" << std::endl;

  for (int i = 0; i < 3; i++)
    std::cout << std::endl;
}
