#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::vector<int> productOfArray(std::vector<int> nums);

int main() {
  std::vector<int> case0 = {1, 2, 3, 4};
  return 0;
}

std::vector<int> productOfArray(std::vector<int> nums) { 
  std::vector<int> ans;
  std::unordered_map<int, int> map;

  for(int i = 0; i < nums.size(); i++){
    map.insert(i, nums[i]);
  }


  

  return ans; 
}
