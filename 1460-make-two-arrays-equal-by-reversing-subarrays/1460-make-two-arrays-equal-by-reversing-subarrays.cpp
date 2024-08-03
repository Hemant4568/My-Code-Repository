class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
      map<int,int>mp;
        for(int i:target)
        {
            mp[i]++;
        }
        for(int i:arr)
        {
            mp[i]--;
        }
        for(auto it:mp)
        {
            if(it.second>0)
                return 0;
        }
        return 1;
    }
};