#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>


#define LOG(x) std::cout << x << std::endl;

std::vector<int> TwoSum(std::vector<int>& nums, int target);


int main() 
{
  std::vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  std::vector<int> ans = TwoSum(nums, target);
  LOG(ans[0] << " " << ans[1]);
  return 0;
}



std::vector<int> TwoSum(std::vector<int>& nums, int target)
{
  std::vector<int> ans;
  std::unordered_map<int, int> map;
  int diff = 0;
  for (int i = 0; i < nums.size(); i++) {
    diff = target - nums[i];
    if(map.find(diff) != map.end()) {
      ans.push_back(map[diff]);
      ans.push_back(i);
    } else {
      map.insert({nums[i], i});
    }
  }
  return ans;
}

