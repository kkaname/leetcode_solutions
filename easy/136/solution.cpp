#include <bits/stdc++.h>
using namespace std;

int single_number(vector<int>& nums) {
  int n = nums.size();
  int single_element = 0;
  for (int i = 0; i < n; i++) {
    single_element = single_element ^ nums[i];
  }
  return single_element;
}

int main(void) {
  vector<int> arr = {2, 2, 1};
  cout << "single element: " << single_number(arr) << endl;

  arr = {4, 1, 2, 1, 2};
  cout << "single element: " << single_number(arr) << endl;

  arr = {1};
  cout << "single element: " << single_number(arr) << endl;

  return 0;
}
