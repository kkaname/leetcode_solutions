#include <bits/stdc++.h>
using namespace std;

void reverse_array(vector<int>& nums, int start, int end) {
  while(start < end) {
    int temp = nums[start];
    nums[start] = nums[end];
    nums[end] = temp;
    ++start;
    --end;
  }
}

void rotate_array(vector<int>& nums, int k) {
  int n = nums.size();
  k = k % n;

  reverse_array(nums, 0, n - 1);
  reverse_array(nums, 0, k - 1);
  reverse_array(nums, k, n - 1);
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
  int k;
  cout << "enter k: ";
  cin >> k;

  rotate_array(nums, k);

  for (int i = 0; i < n; i++) cout << nums[i] << " ";
  cout << endl;

  return 0;
}
