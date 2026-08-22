#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  int n = nums.size();
  unordered_map<int, int> nums_mp;

  for (int i = 0; i < n; i++) {
    int rem = target - nums[i];
    if (nums_mp.find(rem) != nums_mp.end()) return {nums_mp[rem], i};
    else nums_mp[nums[i]] = i;
  }
    return {};
  }

int main(void) {
  vector<int> nums = {2, 7, 11, 15};
  vector<int> indices = twoSum(nums, 9);
  cout << indices[0] << " " << indices[1] << endl;

  nums = {3, 2, 4};
  indices = twoSum(nums, 6);
  cout << indices[0] << " " << indices[1] << endl;

  return 0;
}
