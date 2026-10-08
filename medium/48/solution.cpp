#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

void printMatrix(const vector<vector<int>>& m) {
    cout << "[";
    for (size_t i = 0; i < m.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < m[i].size(); j++) {
            cout << m[i][j];
            if (j != m[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i != m.size() - 1) cout << ",";
    }
    cout << "]";
}

void test(Solution& sol, vector<vector<int>> matrix,
          const vector<vector<int>>& expected, const string& label) {
    cout << label << endl;
    cout << "Input:    ";
    printMatrix(matrix);
    cout << endl;
    sol.rotate(matrix);
    cout << "Output:   ";
    printMatrix(matrix);
    cout << endl;
    cout << "Expected: ";
    printMatrix(expected);
    cout << endl;
    cout << (matrix == expected ? "PASS" : "FAIL") << endl << endl;
}

int main() {
    Solution sol;

    // Example 1: 3x3
    test(sol, {{1,2,3},{4,5,6},{7,8,9}},
         {{7,4,1},{8,5,2},{9,6,3}}, "3x3 matrix");

    // Example 2: 4x4
    test(sol, {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}},
         {{15,13,2,5},{14,3,4,1},{12,6,8,9},{16,7,10,11}}, "4x4 matrix");

    // Edge case: 2x2
    test(sol, {{1,2},{3,4}}, {{3,1},{4,2}}, "2x2 matrix");

    // Edge case: single element
    test(sol, {{1}}, {{1}}, "1x1 matrix");

    return 0;
}
