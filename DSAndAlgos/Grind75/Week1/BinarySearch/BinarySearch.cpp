#include <iostream>
#include <vector>



int BinarySearch(std::vector<int> nums, int target);
void TestBinarySearch(std::vector<int> nums, int target, int expected, int caseNumber);

int main()
{

 std::vector<int> test = {-1, 0, 3, 5, 9, 12};

  TestBinarySearch({-1, 0, 3, 5, 9, 12}, 9, 4, 1);
  TestBinarySearch({-1, 0, 3, 5, 9, 12}, 2, -1, 2);
  TestBinarySearch({-1, 0, 3, 5, 9, 12}, 12, 5, 3);
  TestBinarySearch({0, 3, 5, 9, 12}, 0, 0, 4);


  return 0;
}





int BinarySearch(std::vector<int> nums, int target)
{
  int low = 0;
  int high = nums.size() -1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (nums[mid] < target) {
        low = mid + 1;
    } else if (nums[mid] > target) {
        high = mid - 1;
    } else {
        return mid;
    }

  }

  return -1;
}

// int BinarySearch(std::vector<int> nums, int target)
// {
//   int ans;
//   int currentIndex = nums.size() / 2;
//
//   if (nums[currentIndex] == target)
//     return currentIndex;
//
//   for (int i = 0; i < nums.size(); i++) {
//
//     if (currentIndex > nums.size() + 1)
//       currentIndex = nums.size();
//
//     if (nums[currentIndex] > target) {
//       currentIndex = currentIndex / 2;
//     }
//
//     if (nums[currentIndex] < target) {
//       currentIndex = (currentIndex / 2) + currentIndex;
//     }
//
//     if (nums[currentIndex] == target)
//       return currentIndex;
//   }
//
//
//
//   return -1;
// }
//


void TestBinarySearch(std::vector<int> nums, int target, int expected, int caseNumber)
{
  int result = BinarySearch(nums, target);
  if (result == expected)
    std::cout << "Case " << caseNumber << " Success!" << std::endl;
  else 
    std::cout << "Case " << caseNumber << " Failed!" << std::endl;

  for (int i = 0; i < 2; i++)
    std::cout << std::endl;
}

