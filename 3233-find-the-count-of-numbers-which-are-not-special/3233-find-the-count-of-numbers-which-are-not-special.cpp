class Solution {
public:
//     int countProperDivisors(int x) {
//     int count = 0;
//     for (int i = 1; i <= sqrt(x); ++i) {
//         if (x % i == 0) {
//             if (i != x) count++; 
//             if (x / i != x && x / i != i) count++; 
//         }
//     }
//     return count;
// }

//     int nonSpecialCount(int l, int r) {
//         int specialCount = 0;

//     for (int x = l; x <= r; ++x) {
//         if (countProperDivisors(x) == 2) {
//             specialCount++;
//         }
//     }

//     int totalNumbers = r - l + 1;

//     return totalNumbers - specialCount;
//     }
    vector<int> generatePrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= limit; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

// Function to count non-special numbers in the range [l, r]
int nonSpecialCount(int l, int r) {
    // Generate primes up to sqrt(r)
    int limit = static_cast<int>(sqrt(r));
    vector<int> primes = generatePrimes(limit);

    // Count special numbers in the range [l, r]
    int specialCount = 0;
    for (int prime : primes) {
        int specialNumber = prime * prime;
        if (specialNumber >= l && specialNumber <= r) {
            specialCount++;
        }
    }

    // Total numbers in the range [l, r]
    int totalNumbers = r - l + 1;

    // Non-special numbers are total numbers minus special numbers
    return totalNumbers - specialCount;
}
};