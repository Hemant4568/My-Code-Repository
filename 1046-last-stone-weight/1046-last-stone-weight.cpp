class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        while(stones.size()>1)
        {
            int y=stones.back();
            stones.pop_back();
            int x=stones.back();
            stones.pop_back();
           if(y!=x) stones.push_back(abs(y-x));
            sort(stones.begin(),stones.end());
        }
        if(stones.size()==0)
            return 0;
        return stones[0];
    }
};