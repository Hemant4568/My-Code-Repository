class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
            for(auto it:nums)
            {
                s.insert(it);
            }
        if(s.size()==2)
        {
            auto it=s.end();
            it--;
            return *it;
        }
        if(s.size()==1)
        {
            auto it=s.begin();
            return *it;
        }
        auto it=s.end();
        for(int i=0;i<3;i++)
        {
            it--;
        }
        return *it;
    }
};