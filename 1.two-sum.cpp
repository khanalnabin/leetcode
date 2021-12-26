/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
        for(int i = 0; i < nums.size(); i++){
            if(numToIndex.find(target - nums[i]) != numToIndex.end()){
                return vector<int>{i, numToIndex[target - nums[i]]};
            }
            numToIndex[nums[i]] = i;
        }
    return vector<int>{0,0};
    }
};
// @lc code=end

