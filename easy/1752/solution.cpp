#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
  int n = nums.size();
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (nums[i] > nums[(i + 1) % n]) count++;
  }
  return (count <= 1);
}

int main() {
  vector<int> nums;
  int n, num;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> num;
    nums.push_back(num);
  }

  bool is_sorted = check(nums);
  if (is_sorted) cout << "is sorted" << endl;
  else cout << "is not sorted" << endl;

  return 0;
}
