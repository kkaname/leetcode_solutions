#include <bits/stdc++.h>
using namespace std;

void sortColours(vector<int>& nums) {
  int low, mid, high;
  low = mid = 0;
  high = nums.size() - 1;

  while (mid <= high) {
    if (nums[mid] == 0) {
      swap(nums[low], nums[mid]);
      mid++;
      low++;
    }
    else if (nums[mid] == 1) mid++;
    else {
      swap(nums[mid], nums[high]);
      high--;
    }
  }
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
