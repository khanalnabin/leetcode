/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
  public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		int lengthA = 0, lengthB = 0;
		ListNode *tempA = headA;
		ListNode *tempB = headB;
		while (tempA != NULL && tempB != NULL) {
			lengthA++;
			lengthB++;
			tempA = tempA->next;
			tempB = tempB->next;
		}
		while (tempA != NULL) {
			tempA = tempA->next;
			lengthA++;
		}
		while (tempB != NULL) {
			tempB = tempB->next;
			lengthB++;
		}
		ListNode *runner;
		int diff;
		if (lengthA < lengthB) {
			tempA = headB;
			tempB = headA;
			diff = lengthB - lengthA;
		} else {
			tempA = headA;
			tempB = headB;
			diff = lengthA - lengthB;
		}
		for (int i = 0; i < diff; i++) {
			tempA = tempA->next;
		}
		while (tempA != NULL && tempB != NULL) {
			if (tempA == tempB) {
				return tempA;
			}
			tempA = tempA->next;
			tempB = tempB->next;
		}
		return NULL;
	}
};
// @lc code=end
