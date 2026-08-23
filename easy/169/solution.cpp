#include <bits/stdc++.h>
using namespace std;

// majority element - I (optimal solution using moore's voting algorithm)

int majority_element(vector<int>& nums) {
  int ele, cnt;
  cnt = 0;
  ele = nums[0];

  for (int i = 0; i < nums.size(); i++) {
    if (ele == nums[i]) cnt++;
    else cnt--;

    if (cnt <= 0) ele = nums[i + 1];
  }

  cnt = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (ele == nums[i]) cnt++;
  }
  if (cnt > nums.size() / 2) return ele;
  else return -1;

}

int main(void) {
  vector<int> nums = {3, 2, 3};
  cout << "majority_element: " << majority_element(nums) << endl;

  nums = {2, 2, 1, 1, 1, 2, 2};
  cout << "majority_element: " << majority_element(nums) << endl;

  return 0;
}
