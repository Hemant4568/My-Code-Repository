class Solution {
public:
    long long countPrefix(long long prefix, long long n) {
    long long current = prefix;
    long long next = prefix + 1;
    long long count = 0;
    
    while (current <= n) {
        count += min(n + 1, next) - current;
        current *= 10;
        next *= 10;
    }
    
    return count;
}
    int findKthNumber(int n, int k) {
        long long current = 1; 
    k--; // We start counting from the first element
    
    while (k > 0) {
        long long count = countPrefix(current, n);
        
        if (count <= k) {
            // If the number of integers with this prefix is less than or equal to k,
            // move to the next prefix by incrementing current
            k -= count;
            current++;
        } else {
            // Otherwise, go deeper in the current prefix by adding a '0'
            current *= 10;
            k--; // Remove the current prefix itself from k
        }
    }
    
    return current;
    }
};