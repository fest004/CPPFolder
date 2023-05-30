#include <iostream>
#include <vector>
#include <unordered_set>


bool containsDuplicate(std::vector<int>& nums);
void testContainsDuplicate();


int main()
{
  testContainsDuplicate();
  return 0;
}




bool containsDuplicate(std::vector<int>& nums)
{
  // Set with nums as keys, index as value 
  std::unordered_set<int> numsSet; // nums[i]

  for (int i = 0; i < nums.size(); i++)
  {
    // If map !contains current nums index
    if (numsSet.find(nums[i]) != numsSet.end())
    {
    //If it already contains then return true
    return true;
    }
   // If not then insert the number
      numsSet.insert(nums[i]);

  }
  //If it reaches the end of the vector it returns false as no
  //duplicates have been found
   return false;
}



void testContainsDuplicate()
{
  //Case0
  std::vector<int> case0vector = {1, 2, 3, 1};
  bool case0 = containsDuplicate(case0vector);
  if (case0)
  {
    std::cout << "Case 0 passed" << std::endl;
  } else {
    std::cout << "Case 0 failed" << std::endl;
  }

  //Case1
  std::vector<int> case1vector = {1, 2, 3, 4};
  bool case1 = containsDuplicate(case1vector);
  if (!case1)
  {
    std::cout << "Case 1 passed" << std::endl;
  } else {
    std::cout << "Case 1 failed" << std::endl;
  }

  //Case 2
  std::vector<int> case2vector = {1, 1, 1, 3, 4, 5, 1, 22};
  bool case2 = containsDuplicate(case2vector);
  if (case2)
  {
    std::cout << "Case 2 passed" << std::endl;
  } else {
    std::cout << "Case 2 failed" << std::endl;
  }
  


}
