#include <bits/stdc++.h>
using namespace std;

void sortColours(vector<int>& nums) {
  int n = nums.size();
  int cnt0, cnt1, cnt2;
  cnt0 = cnt1 = cnt2 = 0;

  for (int i = 0; i < n; i++) {
    if (nums[i] == 0) cnt0++;
    else if (nums[i] == 1) cnt1++;
    else cnt2++;
  }

  for (int i = 0; i < cnt0; i++) nums[i] = 0;
  for (int i = cnt0; i < cnt0 + cnt1; i++) nums[i] = 1;
  for (int i = cnt0 + cnt1; i < n; i++) nums[i] = 2;
}

int main(void) {
  vector<int> nums = {2, 0, 2, 1, 1, 0};
  sortColours(nums);
  for (int i = 0; i < nums.size(); i++) cout << nums[i] << " ";
  cout << endl;

  nums = {2, 0, 1};
  sortColours(nums);
  for (int i = 0; i < nums.size(); i++) cout << nums[i] << " ";
  cout << endl;

  return 0;
}
