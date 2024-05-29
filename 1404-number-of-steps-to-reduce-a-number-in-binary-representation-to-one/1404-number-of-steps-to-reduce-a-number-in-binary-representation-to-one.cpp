class Solution {
public:
    long long binaryToDecimal(const std::string& binaryStr) {
    long long decimalValue = 0;
    int length = binaryStr.length();

    for (int i = 0; i < length; ++i) {
        char bit = binaryStr[i];

        decimalValue = (decimalValue << 1) + (bit - '0');
    }

    return decimalValue;
}
    int numSteps(string s) {
         int steps = 0;
    int carry = 0;

    for (int i = s.size() - 1; i > 0; --i) {
        if ((s[i] - '0' + carry) % 2 == 0) {
            steps += 1;
        } else {
            carry = 1;
            steps += 2;
        }
    }

    if (carry == 1) {
        steps += 1;
    }

    return steps;            
    }
};