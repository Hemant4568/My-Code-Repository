class Solution {
public:
    int passThePillow(int n, int time) {
        int i=1;
        bool flag=true;
        for(int j=0;j<time;j++)
        {
            if(flag)
            {
                i++;
                if(i==n)
                    flag=0;
            }
            else
            {
                i--;
                if(i==1)
                    flag=1;
            }
        }
        return i;
    }
};