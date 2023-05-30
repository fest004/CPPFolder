#include <vector>
#include <iostream>
#include <algorithm>


std::vector<std::vector<std::string>> GroupAnagrams(std::vector<std::string> strs);

int main()
{

  return 0;
}




std::vector<std::vector<std::string>> GroupAnagrams(std::vector<std::string> strs)
{
  std::vector<std::vector<std::string>> ans;
  std::vector<int> accountedIndexes;


  for (int i = 0; i < strs.size(); i++)
  {
    std::vector<std::string> tempGroupedAnagram;

    if (std::count(accountedIndexes.begin(), accountedIndexes.end(), i)) 
      break;




  }
  









  return ;
}


// {"eat","tea","tan","ate","nat","bat"}

/*
   Start at strs[0] check for anagrams
   eat will match with tea and ate, will then 
   no longer have to pass through the index of 
   those strings and jump to tan
 */
