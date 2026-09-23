#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int myAtoi(string s) {
      int n = s.size();
      int i = 0;
      // remove leading whitespaces
      while(s[i] == ' ') i++;

      // find sign
      int sign;
      if (s[i] == '-') {
        sign = -1;
        i++;
      }
      else if (s[i] == '+') {
        sign = +1;
        i++;
      }
      else sign = +1;

      // actual conversion
      int num = 0;
      while (i < n && (s[i] >= '0' && s[i] <= '9')) {
        int digit = s[i] - '0';
        if (num > (INT_MAX - digit) / 10) return (sign == -1) ? INT_MIN : INT_MAX;

        num = (num * 10) + digit;
        i++;
      }
      return sign * num;
    }
};

void test(Solution& sol, const string& input, int expected) {
    int result = sol.myAtoi(input);
    cout << "Input:  \"" << input << "\"" << endl;
    cout << "Output: " << result << endl;
    cout << "Expected: " << expected << endl;
    cout << (result == expected ? "PASS" : "FAIL") << endl << endl;
}

int main() {
    Solution sol;

    test(sol, "42", 42);
    test(sol, "   -42", -42);
    test(sol, "4193 with words", 4193);
    test(sol, "words and 987", 0);
    test(sol, "-91283472332", INT_MIN);
    test(sol, "+42", 42);
    test(sol, "1337c0d3", 1337);
    test(sol, "2147483648", INT_MAX);
    test(sol, "-2147483649", INT_MIN);
    test(sol, "", 0);
    test(sol, "   ", 0);
    test(sol, "2147483647", INT_MAX);
    test(sol, "-2147483648", INT_MIN);
    test(sol, "20000000000000000000", INT_MAX);
    test(sol, string(50, '9'), INT_MAX);

    return 0;
}
