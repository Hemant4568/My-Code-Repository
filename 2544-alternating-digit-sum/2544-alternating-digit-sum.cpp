class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>v;
        while(n>0)
        {
            v.push_back(n%10);
            n/=10;
        }          
            
        int l=1;
        int s=0;
    
        for(int i=v.size()-1;i>=0;i--)
        {
            s+=v[i]*l;
            l=l*(-1);
        }
     return s;
    }
};