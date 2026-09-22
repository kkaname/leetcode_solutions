#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> rearrangeArray(vector<int>& nums) {
      int n = nums.size();
      vector<int> ans(n, 0);
      int posIdx = 0;
      int negIdx = 1;
      for (int i = 0; i < n; i++) {
        if (nums[i] >= 0) {
          ans[posIdx] = nums[i];
          posIdx += 2;
        }
        else {
          ans[negIdx] = nums[i];
          negIdx += 2;
        }
      }
      return ans;
    }
};

void printVector(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) cout << ",";
    }
    cout << "]";
}

int main() {
    Solution sol;

    // Test case 1 (from problem example)
    vector<int> nums1 = {3, 1, -2, -5, 2, -4};
    vector<int> result1 = sol.rearrangeArray(nums1);
    cout << "Input:  [3,1,-2,-5,2,-4]" << endl;
    cout << "Output: ";
    printVector(result1);
    cout << endl;
    cout << "Expected: [3,-2,1,-5,2,-4]" << endl << endl;

    // Test case 2 (minimal case)
    vector<int> nums2 = {-1, 1};
    vector<int> result2 = sol.rearrangeArray(nums2);
    cout << "Input:  [-1,1]" << endl;
    cout << "Output: ";
    printVector(result2);
    cout << endl;
    cout << "Expected: [1,-1]" << endl;

    return 0;
}
