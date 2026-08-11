#include <bits/stdc++.h>
using namespace std;

int remove_duplicates(vector<int>&nums) {
  int i, j;
  int n = nums.size();
  i = 0;
  for (j = 1; j < n; j++) {
    if (nums[i] != nums[j]) nums[++i] = nums[j];
  }

    return (i + 1);
}


int main() {
  vector<int> nums;
  int n, num;
  cin >> n;
  cout << "Enter sorted array: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> num;
    nums.push_back(num);
  }

  int idx = remove_duplicates(nums);
  for (int i = 0; i < idx; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;

  return 0;
}
