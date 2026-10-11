#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void setZeroes(vector<vector<int>>& matrix) {
    int nRows = matrix.size();
    int nCols = matrix[0].size();
    int col0 = 1;

    for (int i = 0; i < nRows; i++) {
      for (int j = 0; j < nCols; j++) {
        if (matrix[i][j] == 0) {
          if (j != 0) matrix[0][j] = 0;
          else col0 = 0;
          matrix[i][0] = 0;
        }
      }
    }

    for (int i = nRows - 1; i > 0; i--) {
      for (int j = nCols - 1; j > 0; j--) {
        if ((matrix[i][0] == 0) || (matrix[0][j] == 0)) matrix[i][j] = 0;
      }
    }

    if (matrix[0][0] == 0) {
      for (int j = 0; j < nCols; j++) matrix[0][j] = 0;
    }
    if (col0 == 0) {
      for (int i = 0; i < nRows; i++) matrix[i][0] = 0;
    }
  }
};

void printMatrix(const vector<vector<int>>& matrix) {
  for (const auto& row : matrix) {
    for (int val : row) {
      cout << val << " ";
    }
    cout << "\n";
  }
}

int main() {
  Solution sol;

  // Example 1
  vector<vector<int>> m1 = {{1,1,1},{1,0,1},{1,1,1}};
  cout << "Example 1:\n";
  printMatrix(m1);
  sol.setZeroes(m1);
  cout << "After setting to Zeros:\n";
  printMatrix(m1);

  // Example 2
  vector<vector<int>> m2 = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
  cout << "\nExample 2:\n";
  printMatrix(m2);
  sol.setZeroes(m2);
  cout << "After setting to Zeros:\n";
  printMatrix(m2);

  vector<vector<int>> m3 = {{1,2,3,4},{5,6,0,8},{9,10,11,12}};
  cout << "\nExample 3:\n";
  printMatrix(m3);
  sol.setZeroes(m3);
  cout << "After setting to Zeros:\n";
  printMatrix(m3);   // 1 2 0 4 / 0 0 0 0 / 9 10 0 12

  return 0;
}
