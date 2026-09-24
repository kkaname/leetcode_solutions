#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, bottom = n - 1;
        int left = 0, right = m - 1;
        vector<int> ans;

        while (top <= bottom && left <= right) {
            // move left to right
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            // move top to bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // move right to left
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // move bottom to top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
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

void test(Solution& sol, vector<vector<int>> matrix, const vector<int>& expected, const string& label) {
    vector<int> result = sol.spiralOrder(matrix);
    cout << label << endl;
    cout << "Output:   ";
    printVector(result);
    cout << endl;
    cout << "Expected: ";
    printVector(expected);
    cout << endl;
    cout << (result == expected ? "PASS" : "FAIL") << endl << endl;
}

int main() {
    Solution sol;

    // Example 1: 3x3 square matrix
    test(sol, {{1,2,3},{4,5,6},{7,8,9}}, {1,2,3,6,9,8,7,4,5}, "3x3 square matrix");

    // Example 2: 3x4 rectangular matrix
    test(sol, {{1,2,3,4},{5,6,7,8},{9,10,11,12}}, {1,2,3,4,8,12,11,10,9,5,6,7}, "3x4 rectangular matrix");

    // Edge case: single row
    test(sol, {{1,2,3}}, {1,2,3}, "Single row (1x3)");

    // Edge case: single column
    test(sol, {{1},{2},{3}}, {1,2,3}, "Single column (3x1)");

    // Edge case: single element
    test(sol, {{7}}, {7}, "Single element (1x1)");

    return 0;
}
