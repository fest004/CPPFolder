
#include <iostream>
#include <vector>
#include <unordered_map>



std::vector<int> twoSum(std::vector<int>& nums, int target);

int main()
{

}


std::vector<int> twoSum(std::vector<int>& nums, int target)
{
  std::vector<int> targetIndeces;
  std::unordered_map<int, int> map; // Value : Index



  // Loops through nums vector, checks if the complementary is in the map, if so return nums[i] and complement
  // else add nums[i] to the map 
  for (int numsIte = 0; numsIte < nums.size(); numsIte++)
  {
    // Value that would need to be in the map to pair with nums[numsIterator] for target
    int complement = nums[numsIte] - target; 

    // If complement is already in the map we add them to ans array and break loop to return it
    if (map.find(complement) != map.end())
    {
      targetIndeces.push_back(map[complement]);
      targetIndeces.push_back(nums[numsIte]);
      break;
    } else {
      // If not already in map we insert and go agane
      map.insert(nums[numsIte], numsIte);
    }
  }



  return targetIndeces;
}


