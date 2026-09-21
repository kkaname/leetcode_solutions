#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_ele = -1;
        for (int i = arr.size() - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = max_ele;
            max_ele = max(max_ele, temp);
        }
        return arr;
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
    vector<int> arr1 = {17, 18, 5, 4, 6, 1};
    vector<int> result1 = sol.replaceElements(arr1);
    cout << "Input:  [17,18,5,4,6,1]" << endl;
    cout << "Output: ";
    printVector(result1);
    cout << endl;
    cout << "Expected: [18,6,6,6,1,-1]" << endl << endl;

    // Test case 2 (edge case: single element)
    vector<int> arr2 = {400};
    vector<int> result2 = sol.replaceElements(arr2);
    cout << "Input:  [400]" << endl;
    cout << "Output: ";
    printVector(result2);
    cout << endl;
    cout << "Expected: [-1]" << endl;

    return 0;
}
