#include <iostream>
#include <unordered_map>
#include <vector>



int main()
{


  return 0;
}



std::vector<int> TwoSum(std::vector<int> &nums, int target)
{
  // Vector storing the answer for returning
  std::vector<int> ans;
  // Map storing the Value : Index, convenient for O(1) lookup time
  // Reason why its Value : Index is so we can check for the values 
  // , and if the values are right we can return the index as the task
  // describes
  std::unordered_map<int, int> map; // Value : Index

  for (int i = 0; i < nums.size(); i++)
  {
    int complement = target - nums[i];
    // This is preferred method of checking if a map contains a specific
    // key value. if (map has key within the map.end())
    if (map.find(complement) != map.end())
    {
      //If true, insert into ans and break
      ans.push_back(i);
      ans.push_back(map[complement]);
      break;
    } else {
      // Else insert the current nums[i] into the map
      map.insert(nums[i], i);
    }
  }
return ans;
}
