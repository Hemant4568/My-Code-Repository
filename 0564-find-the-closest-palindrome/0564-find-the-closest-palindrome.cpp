class Solution {
public:
    string nearestPalindromic(string n) {
         int len = n.size();
        long long original = stoll(n);
        vector<long long> candidates;
        candidates.push_back(pow(10, len) + 1); 
        candidates.push_back(pow(10, len - 1) - 1); 
        long long prefix = stoll(n.substr(0, (len + 1) / 2));
        for (long long i = -1; i <= 1; i++) {
            std::string p = std::to_string(prefix + i);
            std::string candidate = p + std::string(p.rbegin() + (len % 2), p.rend());
            candidates.push_back(stoll(candidate));
        }
        long long closest = -1;
        for (long long candidate : candidates) {
            if (candidate != original) {
                if (closest == -1 ||
                    std::abs(candidate - original) < std::abs(closest - original) ||
                    (std::abs(candidate - original) == std::abs(closest - original) && candidate < closest)) {
                    closest = candidate;
                }
            }
        }
        
        return to_string(closest);
    }
};