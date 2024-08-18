class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n);  
    ugly[0] = 1;  

    int p2 = 0, p3 = 0, p5 = 0;  

    for (int i = 1; i < n; i++) {
        int next_ugly2 = ugly[p2] * 2;
        int next_ugly3 = ugly[p3] * 3;
        int next_ugly5 = ugly[p5] * 5;
        int next_ugly = min({next_ugly2, next_ugly3, next_ugly5});
        ugly[i] = next_ugly;
        if (next_ugly == next_ugly2) p2++;
        if (next_ugly == next_ugly3) p3++;
        if (next_ugly == next_ugly5) p5++;
    }

    return ugly[n-1];
    }
};