#include <bits/stdc++.h>
using namespace std;

int max_consecutive_ones(vector<int>& nums) {
  int n = nums.size();
  int max, cnt;
  max = cnt = 0;

  for (int i = 0; i < n; i++) {
    if (nums[i] == 1) {
      cnt++;
      if (max < cnt) max = cnt;
    }
    else cnt = 0;
  }
  return max;
}

int main(void) {
  vector<int> nums = {1, 1, 0, 1, 1, 1};
  cout << "No. of consecutives ones: " << max_consecutive_ones(nums) << endl;

  nums = {1, 0, 1, 1, 0, 1};
  cout << "No. of consecutives ones: " << max_consecutive_ones(nums) << endl;

  return 0;
}
