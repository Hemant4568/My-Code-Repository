/*class Solution {
public:
    int c=0;
    int totalzero(int n)
    {
        while(n>0)
        {
            if(n%10==0)
                c++;
            n=n/10;
        }
        return c;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<=n/2;i++)
        {
            if((totalzero(i)==0) && (totalzero(n-i)==0))
                return {i,n-i};
        }
        return {};
    }
};*/
class Solution {
public:
    int containZero(int n){
        int count = 0;
        while(n > 0){
            if(n % 10 == 0) count++;
            n /= 10;
        }
        return count;
    }
    
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1; i <= n/2; i++){
            if((containZero(i) == 0) && (containZero(n-i) == 0)) return {i, n-i};
        }
        return {};
    }
};