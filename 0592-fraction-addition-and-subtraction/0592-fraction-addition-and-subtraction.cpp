class Solution {
public:
     int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
    
    string fractionAddition(string expression) {
        istringstream ss(expression);
        int result_numerator = 0, result_denominator = 1;
        char sign;
        
        while (ss >> sign) {
            int num, denom;
            if (sign != '+' && sign != '-') {
                ss.putback(sign);
                sign = '+';
            }

            ss >> num;
            ss.ignore();  
            ss >> denom;

            if (sign == '-') num = -num;

            result_numerator = result_numerator * denom + num * result_denominator;
            result_denominator *= denom;

            int g = gcd(abs(result_numerator), abs(result_denominator));
            result_numerator /= g;
            result_denominator /= g;
        }

        return to_string(result_numerator) + "/" + to_string(result_denominator);
    }
};