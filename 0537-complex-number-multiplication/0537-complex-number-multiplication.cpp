class Solution {
public:
   pair<int, int> parseComplex(string& complexStr) {
    int plusPos = complexStr.find('+');
    int iPos = complexStr.find('i');
    int real = stoi(complexStr.substr(0, plusPos));
    int imaginary =stoi(complexStr.substr(plusPos + 1, iPos - plusPos - 1));
    return {real, imaginary};
}
string complexNumberMultiply(string& num1,string& num2) {
    auto [a, b] = parseComplex(num1);
    auto [c, d] = parseComplex(num2);

    int realPart = a * c - b * d;
    int imaginaryPart = a * d + b * c;

    return to_string(realPart) + "+" + to_string(imaginaryPart) + "i";
}

};