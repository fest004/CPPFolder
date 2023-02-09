#include <corecrt_search.h>
#include <iostream>
#include <string>

#define LOG(x) std::cout << std::boolalpha << x << std::endl;


bool validAnagram(std::string s);

int main(){
  std::string case0s = "tacocat";
  std::string case1s = "anagram";
  std::string case2s = "validdilav";
  bool case0 = validAnagram(case0s);
  bool case1 = validAnagram(case1s);
  bool case2 = validAnagram(case2s);

  LOG(case0);
  LOG(case1);
  LOG(case2);
  return 0;
}


// tacocat

bool validAnagram(std::string s){


  for(int i = 0; i < s.length() / 2 - 1; i++)
  if(s[i] != s[s.length() - 1 -i]){
    return false;
  }
return true;
}



