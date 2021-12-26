/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
 */

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right)
	    : val(x), left(left), right(right) {}
};
// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
  public:
	void helper(TreeNode *root, vector<string> &result, string curr) {
		if (!root)
			return;
		if (root->left || root->right)
			curr += to_string(root->val) + "->";
		else {
			curr += (to_string(root->val));
			result.push_back(curr);
		}
		helper(root->left, result, curr);
		helper(root->right, result, curr);
	}
	vector<string> binaryTreePaths(TreeNode *root) {
		vector<string> result;
		string curr = "";
		helper(root, result, curr);
		return result;
	}
};
// @lc code=end
