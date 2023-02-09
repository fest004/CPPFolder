#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> topKFrequent(std::vector<int> &nums, int k);

int main() {
  std::vector<int> case0array = {1, 1, 1, 2, 2, 3};
  std::vector<int> case0 = topKFrequent(case0array, 2);
  for (auto x : case0) {
    std::cout << x << std::endl;
  }
  return 0;
}

std::vector<int> topKFrequent(std::vector<int> &nums, int k) {

  // Making initial hashmap

  std::unordered_map<int, int> hashmap;
  for (int i = 0; i < nums.size(); i++) {
    hashmap[nums[i]]++;
  }

  // Making a bucket
  // Two dimensional vector, where the
  std::vector<std::vector<int>> buckets(nums.size() + 1);
  for (auto i = hashmap.begin(); i != hashmap.end(); i++) {
    buckets[i->second].push_back(i->first);
  }

  std::vector<int> result;
  for (int i = nums.size(); i >= 0; i--) {
    if (result.size() >= k) {
      break;
    }
    if (!buckets[i].empty()) {
      result.insert(result.end(), buckets[i].begin(), buckets[i].end());
    }
  }

  return result;
}
