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

  // Making a map to check if current num2 index is in nums1 with O(1) lookup time
  std::unordered_map<int, int> nums1map; // num : index

  // Placing each number in map accordingly
  for (int i = 0; i < nums1.size(); i++)
  {
    nums1map.emplace(nums1[i], i);
  }

  
  for (int i = 0; i < nums2.size(); i++)
  {

    // If current nums2 index is not in the map, it is therefore not 
    // in the nums1 array and we can skip
    if (nums1map.find(nums2[i]) == nums1map.end())
      continue;

    // If nums2 number is already in answer array, it can be skipped to
    // avoid duplicates
    if (std::find(ans.begin(), ans.end(), nums2[i]) != ans.end())
      continue;


    // If the two roadblocks are passed we can push to the answer array
    ans.push_back(nums2[i]);
  }

  // return when looped through nums2
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
