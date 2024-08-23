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
            // If the sign is not + or -, reset the stream position to include the number
            if (sign != '+' && sign != '-') {
                ss.putback(sign);
                sign = '+';
            }

            // Extract the fraction
            ss >> num;
            ss.ignore();  // Ignore the '/'
            ss >> denom;

            // Adjust sign for subtraction
            if (sign == '-') num = -num;

            // Update result fraction
            result_numerator = result_numerator * denom + num * result_denominator;
            result_denominator *= denom;

            int g = gcd(abs(result_numerator), abs(result_denominator));
            result_numerator /= g;
            result_denominator /= g;
        }

        // Return the final result in the form "numerator/denominator"
        return std::to_string(result_numerator) + "/" + std::to_string(result_denominator);
    }
};