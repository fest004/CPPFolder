#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


std::vector<int> intersection(std::vector<int> nums1, std::vector<int> nums2);
void testIntersection(const std::vector<int>& nums1, const std::vector<int>& nums2);


int main()
{


  testIntersection({1, 2, 3, 4, 5, 6}, {4, 7, 8, 9, 5, 1});
  testIntersection({1, 2, 2, 3, 4}, {2, 3, 3, 4, 5});

  return 0;
}


std::vector<int> intersection(std::vector<int> nums1, std::vector<int> nums2)
{
  std::vector<int> ans;
  std::unordered_map<int, int> nums1map; // num : index

  for (int i = 0; i < nums1.size(); i++)
  {
    nums1map.emplace(nums1[i], i);
  }

  for (int i = 0; i < nums2.size(); i++)
  {

    if (nums1map.find(nums2[i]) == nums1map.end())
      continue;

    if (std::find(ans.begin(), ans.end(), nums2[i]) != ans.end())
      continue;


    ans.push_back(nums2[i]);
  }

  return ans;
}



void testIntersection(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::cout << "Input:\n";
    std::cout << "nums1 = { ";
    for (const int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << "}\n";

    std::cout << "nums2 = { ";
    for (const int num : nums2) {
        std::cout << num << " ";
    }
    std::cout << "}\n";

    std::vector<int> result = intersection(nums1, nums2);

    std::cout << "Output:\n";
    std::cout << "Intersection: { ";
    for (const int num : result) {
        std::cout << num << " ";
    }
    std::cout << "}\n\n";
}
