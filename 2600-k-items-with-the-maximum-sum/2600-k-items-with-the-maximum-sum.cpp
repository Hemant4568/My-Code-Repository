class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        if(k<=numOnes)
            return k;
        if(numOnes+numZeros>=k)
            return numOnes;
        int a=numOnes+numZeros;
        if(a<k)
        {
            int b=k-a;
            int ans=numOnes+(b*(-1));
            return ans;
            
        }
        return 0;
    }
};