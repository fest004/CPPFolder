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
    // Finds the index between current high and low. 
    // First iteration middle of array. 
    int mid = low + (high - low) / 2;

    if (nums[mid] < target) {
      // If current middle is less than the target, we know the target is on the left side from current middle,
      // and we can exclude what is right of middle
        low = mid + 1;
    } else if (nums[mid] > target) {
      // Same but on other side, if nums[middle] is greater we can exclude the left side from middle. 
        high = mid - 1;
    } else {
      // If there are neither of these, it will equal mid
        return mid;
    }
  }


  // If low ever catches up to high, it means target is not in array
  return -1;
}

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

