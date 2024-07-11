class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> stack;
        string result = s;

    for (int i = 0; i < result.length(); ++i) {
        if (result[i] == '(') {
            stack.push(i);
        } else if (result[i] == ')') {
            int start = stack.top();
            stack.pop();
            reverse(result.begin() + start + 1, result.begin() + i);
        }
    }

    string finalResult;
    for (char c : result) {
        if (c != '(' && c != ')') {
            finalResult += c;
        }
    }

    return finalResult;
    }
};