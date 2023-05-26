#include <iostream>



std::string reverseString(std::string s);

void testReverseString();


int main()
{
  testReverseString();
  return 0;
}



std::string reverseString(std::string s)
{
  std::string ans;

  for (int i = s.size() - 1; i >= 0 ; i--)
  {
    ans += s[i];
  }


  return ans;
}


void testReverseString()
{
  std::string hello = "hello";
  hello = reverseString(hello);
  std::cout << hello << std::endl;
  if (hello == "olleh") {
    std::cout << "Case 1 Success" << std::endl;
  } else {
    std::cout << "Case 1 Failed" << std::endl;
  }


  std::string gay = "gay";
  gay = reverseString(gay);
  std::cout << gay << std::endl;
  if (gay == "yag") {
    std::cout << "Case 2 Success" << std::endl;
  } else {
    std::cout << "Case 2 Failed" << std::endl;
  }

}
