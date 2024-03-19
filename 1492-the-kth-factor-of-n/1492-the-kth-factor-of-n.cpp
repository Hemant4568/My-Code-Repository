class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>temp;
        int c=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;
            if(c==k){
                return i;
                break;
            }
        }
       // if(temp.size()<k)
            return -1;
       // return temp[k-1];
    }
};