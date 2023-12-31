class Solution {
public:
    int maximum(vector<int>piles)
    {
        int n=INT_MIN;
        for(int i=0;i<piles.size();i++)
        {
            n=max(n,piles[i]);
        }
        return n;
    }
   int find(vector<int>& piles, int k)
    {
       int time=0;
        for(int i=0;i<piles.size();i++)
        {
          time+=ceil ((double)piles[i]/(double)k);

        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
       int low=1;
        int high=maximum(piles);
        while(low<high)
        {
            int mid=low+(high-low)/2;
            int time=find(piles,mid);
            if(time<=h)
            {
              high=mid;
            }
            else 
                low=mid+1;
        }
        return low;
    }
};