class Solution {
public:
    int calculate(string s) {
         stack<int> stk;
    int num = 0, sign = 1, result = 0;

    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        } else if (c == '+') {
            result += sign * num;
            num = 0;
            sign = 1;
        } else if (c == '-') {
            result += sign * num;
            num = 0;
            sign = -1;
        } else if (c == '(') {
            stk.push(result);
            stk.push(sign);
            result = 0;
            sign = 1;
        } else if (c == ')') {
            result += sign * num;
            result *= stk.top(); stk.pop();
            result += stk.top(); stk.pop();
            num = 0;
        }
    }

    result += sign * num;
    return result;
    }
};