#include <iostream>
#include <vector>




int maxProfit(std::vector<int>& prices);
void testMaxProfit(std::vector<int> prices, int expected);


int main()
{

  testMaxProfit({7, 1, 5, 3, 6, 4}, 5);

  testMaxProfit({7, 6, 4, 3, 3, 1}, 0);

  testMaxProfit({1, 2, 3, 4, 5, 6, 7, 8, 9}, 8);

  return 0;
}


// {7, 1, 5, 3, 6, 4}

int maxProfit(std::vector<int>& prices)
{
  int buyIndex = 0; //Left
  int sellIndex = 0; //Right
  int profit = 0;

  while (sellIndex < prices.size())
  {
    if (prices[sellIndex] - prices[buyIndex] > profit)
      profit = prices[sellIndex] - prices[buyIndex];

    if (prices[sellIndex] - prices[buyIndex] < 0)
      buyIndex = sellIndex;

    sellIndex++;
  }
return profit;
}


void testMaxProfit(std::vector<int> prices, int expected)
{
  int result = maxProfit(prices);
  
  std::cout << "Input: " << std::endl;

  for (auto price : prices)
    std::cout << price << std::endl;

  std::cout << "Expected: " << expected << std::endl;
  std::cout << "Output: " << result << std::endl;

  if (result == expected)
    std::cout << "Success!" << std::endl;
  else 
    std::cout << "Failure!"<< std::endl;

  for (int i = 0; i < 3; i++)
    std::cout << std::endl;



}
