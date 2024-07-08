class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>temp(n);
        for(int i=0;i<n;i++)
        {
            temp[i]=i+1;
        }
        int idx=0;
        while(temp.size()>1)
        {
            idx=(idx+k-1)%temp.size();
            temp.erase(temp.begin()+idx);
        }
        return temp[0];
    }
};