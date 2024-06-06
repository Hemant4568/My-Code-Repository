class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        map<int,int>mp;
        for(int i:hand)
        {
            mp[i]++;
        }
        while(!mp.empty())
        {
            int i=mp.begin()->first;
            for(int j=0;j<groupSize;j++)
            {
                int k=i+j;
                if(mp[k]==0)
                    return 0;
                mp[k]--;
                if(mp[k]==0)
                mp.erase(k);
            }
        }
        return 1;
    }
};