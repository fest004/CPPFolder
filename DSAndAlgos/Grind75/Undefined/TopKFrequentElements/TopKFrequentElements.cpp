#include <iostream>
#include <iterator>
#include <vector>
#include <unordered_map>



std::vector<int> TopKFrequentElements(std::vector<int> nums, int k);
bool TestTopK();

int main()
{
  TopKFrequentElements({1, 2, 1, 4, 2, 1, 1, 1}, 2);
  return 0;
}


std::vector<int> TopKFrequentElements(std::vector<int> nums, int k)
{
  std::unordered_map<int, int> map; 

  
  // Store frequency of each element in nums into map
  for (int i = 0; i < nums.size(); i++) 
    map[nums[i]]++;

 
  // Each element in buckets is a bucket that cointains the frequency of each number in nums
  std::vector<std::vector<int>> buckets(nums.size() + 1);
  for (auto it = map.begin(); it != map.end(); it++)
  {
    buckets[it->second].push_back(it->first);
  }

  //Buckets look like this:

  /*

  Example nums: {1, 1, 2, 3, 4, 1, 4}

  {0,      1,       2,     3,    4,  5,  6, 7} // First vec is length of nums, as an element of nums cannot appear more than nums.size()
  {}, {{2}, {3}}, {{4}}, {{1}}, {}, {}, {}, {}


  So 0 elements of nums has 0 instances of itself // Technically infinite but we dont include  as they are irrelevent
  2 elements of nums has 1 instance of itself (2 and 3)
  1 element has 2 instances of itself (4)
  1 element has 3 instances of itself (1)

  If k == 1 it would return {1}
  If k == 2 it would return {1, 4}

  And so on...

  */

  std::vector<int> result;

  //Starts from the top of the buckets vector and works it way down until result contains k elements
  for (int i = nums.size(); i >= 0; i--)
  {
    // Stops loop when result contains k elements 
    if (result.size() > k) {
      break;
    }

    //Adds whichever index it has worked its way down to to the result
    if (!buckets.empty())
    {
      result.insert(result.end(), buckets[i].begin(), buckets[i].end());
    }
  }


  return result;
}
