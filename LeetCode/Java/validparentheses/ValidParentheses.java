package validparentheses;

import java.util.Stack;

public class ValidParentheses {
	public static void main(String[] args) {
		Solution sol = new Solution();
		boolean res = sol.isValid("[");
		System.out.println(res);
	}
}

// https://leetcode.com/problems/valid-parentheses/

//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
	public boolean isValid(String s) {
		Stack<Character> stack = new Stack<>();

		// push expected closing brackets for each opening bracket.
		// if current char is a closing bracket, it must match the top of the stack.
		for (char ch : s.toCharArray()) {
			if (ch == '(') {
				stack.push(')');
			} else if (ch == '{') {
				stack.push('}');
			} else if (ch == '[') {
				stack.push(']');
			} else if (stack.isEmpty() || stack.pop() != ch) {
				return false;
			}
		}

		return stack.isEmpty();
	}
}
//IMPORTANT!! Submit Code Region End(Do not remove this line)