/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	string convertToTitle(int columnNumber) {
		string result = "";
		while (columnNumber > 0) {
			result = char('A' + (columnNumber - 1) % 26) + result;
			columnNumber = (columnNumber - 1) / 26;
		}
		return result;
	}
};
// @lc code=end
int main() {
	Solution a;
	cout << a.convertToTitle(20) << endl;
}