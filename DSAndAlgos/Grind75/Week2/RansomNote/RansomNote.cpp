#include <ios>
#include <iostream>
#include <unordered_map>





bool canConstruct(std::string ransomNote, std::string magazine);

void testCanConstruct(std::string ransomNote, std::string magazine, bool expected);




int main()
{

  testCanConstruct("aa",  "aab", true);
  testCanConstruct("abb",  "aab", false);
  testCanConstruct("abba",  "bbaabb", true);


  return 0;
}



bool canConstruct(std::string ransomNote, std::string magazine)
{
  if (magazine.length() < ransomNote.length())
    return false;

  
  // Put both strings into map, tracking count of each letter
  std::unordered_map<char, int> magazineMap; // Letter : Count
  std::unordered_map<char, int> ransomNoteMap; //Letter : Count


  // Making full map of magazine first
  for (int i = 0; i < magazine.length(); i++) {
    // If char is not in map
    if (magazineMap.find(magazine[i]) == magazineMap.end()) {
      // Place in map
      magazineMap.emplace(magazine[i], 1);
    } else {
      // Else ++ the count of the letter 
      magazineMap[magazine[i]] += 1;
    }
  }

  // Making map for ransomNote same as above
  for (int i = 0; i < ransomNote.length(); i++) {
    if (ransomNoteMap.find(ransomNote[i]) == ransomNoteMap.end()) {
      ransomNoteMap.emplace(ransomNote[i], 1);
    } else {
      ransomNoteMap[ransomNote[i]] += 1;
      // But checking if a letter has a higher count in ransom note, if so, return false
      if (ransomNoteMap[ransomNote[i]] > magazineMap[ransomNote[i]])
        return false;
    }
  }

  // If both loops went through, return true

  return true;
}




void testCanConstruct(std::string ransomNote, std::string magazine, bool expected)
{
  bool result = canConstruct(ransomNote, magazine);
  std::cout << "Result: " << std::boolalpha << result << std::endl;
  if (result == expected)
    std::cout << "Success!" << std::endl;
  else
    std::cout << "Failure!" << std::endl;

  for (int i = 0; i < 2; i++)
    std::cout << std::endl;
}
