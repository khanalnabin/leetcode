/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
  public:
	int firstBadVersion(int n) {
		unsigned int start = 1, end = n;
		int res = -1;
		while (start <= end) {
			int mid = (start + end) / 2;
			if (isBadVersion(mid)) {
				res = mid;
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		}
		return res;
	}
};
// @lc code=end
