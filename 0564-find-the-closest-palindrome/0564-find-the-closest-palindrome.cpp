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
            string p = to_string(prefix + i);
            string candidate = p + string(p.rbegin() + (len % 2), p.rend());
            candidates.push_back(stoll(candidate));
        }
        long long closest = -1;
        for (long long candidate : candidates) {
            if (candidate != original) {
                if (closest == -1 ||
                    abs(candidate - original) < abs(closest - original) ||
                    (abs(candidate - original) == abs(closest - original) && candidate < closest)) {
                    closest = candidate;
                }
            }
        }
        
        return to_string(closest);
    }
};