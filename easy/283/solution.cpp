#include <bits/stdc++.h>
using namespace std;

void move_zeros(vector<int>& nums) {
  int n = nums.size();
  int i, j;
  i = j = 0;
  while (j < n) {
    if (nums[j] != 0) {
      nums[i++] = nums[j];
    }
    j++;
  }
  while (i < n) {
    nums[i++] = 0;
  }
}

int main() {
  int n;
  cin >> n;
  int num;
  vector<int> nums;
  for (int i = 0; i < n; i++) {
    cin >> num;
    nums.push_back(num);
  }

  move_zeros(nums);

  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;

  return 0;
}
