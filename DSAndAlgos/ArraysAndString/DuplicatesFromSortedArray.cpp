#include <iostream>
#include <vector>



int RemoveDuplicates(std::vector<int> nums);
void TestRemoveDuplicates();




int main()
{
  TestRemoveDuplicates();
  return 0;
}


// i = 1
// {1, 3, 4, 4}

int RemoveDuplicates(std::vector<int> nums)
{
  // if (nums.size() == 0)
    // return 0;


  for (int i = 1; i < nums.size(); i++)
  {
    if (i > nums.size())
      break;


    if (nums[i - 1] == nums[i]) {
      nums.erase(nums.begin() + i);
      i--;
    }

  }
  return nums.size();
}


void TestRemoveDuplicates()
{
  std::vector<int> case1 = {1, 1, 2, 2, 3, 4, 4, 5};
  int case1result = RemoveDuplicates(case1);
  if (case1result == 5) {
    std::cout << "Case 1 Success" << std::endl;
  } else {
    std::cout << "Case 1 Failed" << std::endl;
  }
  std::cout << case1result << std::endl;


  std::vector<int> case2 = {0, 0, 0, 0, 0, 0};
  int case2result = RemoveDuplicates(case2);
  if (case2result == 1) {
    std::cout << "Case 2 Success" << std::endl;
  } else {
    std::cout << "Case 2 Failed" << std::endl;
  }
  std::cout << case2result << std::endl;



  std::vector<int> case3 = {0};
  int case3result = RemoveDuplicates(case3);
  if (case3result == 1) {
    std::cout << "Case 3 Success" << std::endl;
  } else {
    std::cout << "Case 3 Failed" << std::endl;
  }
  std::cout << case3result << std::endl;



  std::vector<int> case4 = {};
  int case4result = RemoveDuplicates(case4);
  if (case4result == 0) {
    std::cout << "Case 4 Success" << std::endl;
  } else {
    std::cout << "Case 4 Failed" << std::endl;
  }
  std::cout << case4result << std::endl;












}
