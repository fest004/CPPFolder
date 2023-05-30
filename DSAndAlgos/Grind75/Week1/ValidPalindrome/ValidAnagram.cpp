#include <iostream>
#include <vector>


bool validPalindrome(std::string s);

int main()
{
  //Test case 0 - Should be true
  std::string case0 = "tacocat";
  bool case0Bool = validPalindrome(case0);
  if (case0Bool)
  {
    std::cout << "Case 0 Success" << std::endl;
  } else {
    std::cout << "Case 0 Failed" << std::endl;
  }


  //Test case 1 - Should be true
  std::string case1 = "wallaw";
  bool case1Bool = validPalindrome(case1);
  if (case1Bool)
  {
    std::cout << "Case 1 Success" << std::endl;
  } else {
    std::cout << "Case 1 Failed" << std::endl;
  }



  //Test case 2 - Should be false
  std::string case2 = "FelixErKul";
  bool case2Bool = validPalindrome(case2);
  if (!case2Bool)
  {
    std::cout << "Case 2 Success" << std::endl;
  } else {
    std::cout << "Case 2 Failed" << std::endl;
  }



  
  return 0;
}





//Takes in string, compares first and last indece on first loop
// second and second to last on second loop and so on
bool validPalindrome(std::string s)
{
  int endI = s.size() - 1;
  for (int startI = 0; startI < s.length() / 2 - 1; startI++)
  {
    if (s[startI] != s[endI])
    {
      return false;
    }
    endI--;
  }
  return true;
}
