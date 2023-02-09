#include <algorithm>
#include <iostream>
#include <vector>

int longestConsecutive(std::vector<int> &nums);

int main() {
  //
  // std::vector<int> case0vector = {100, 4, 200, 1, 3, 2};
  // int case0 = longestConsecutive(case0vector);
  //
  std::vector<int> case1vector = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  //
  int case1 = longestConsecutive(case1vector);

  std::cout << case1 << std::endl;

  return 0;
}

int longestConsecutive(std::vector<int> &nums) {
  int ans = 0;
  int current = 1;
  std::sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] + 1 == nums[i + 1]) {
      current += 1;
      std::cout << "IF" << std::endl;
    } else {
      std::cout << "ELSE" << std::endl;
      if (current > ans) {
        ans = current;
      }
      current = 1;
    }
  }

  return ans;
}
