/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class MyQueue {
  private:
	stack<int> input, output;

  public:
	MyQueue() {
		input = stack<int>{};
		output = stack<int>{};
	}

	void push(int x) { input.push(x); }

	int pop() {
		while (!input.empty()) {
			output.push(input.top()), input.pop();
		}
		int top = output.top();
		output.pop();
		while (!output.empty()) {
			input.push(output.top()), output.pop();
		}
		return top;
	}

	int peek() {
		while (!input.empty()) {
			output.push(input.top()), input.pop();
		}
		int top = output.top();
		while (!output.empty()) {
			input.push(output.top()), output.pop();
		}
		return top;
	}

	bool empty() { return input.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end
