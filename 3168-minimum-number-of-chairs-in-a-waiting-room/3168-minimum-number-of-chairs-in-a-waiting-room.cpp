class Solution {
public:
    int minimumChairs(string s) {
        int a=0;
        int maxi=0;
        for(char x:s)
        {
            if(x=='E')
                a++;
            else
                a--;
            maxi=max(maxi,a);
        }
        return maxi;
    }
};