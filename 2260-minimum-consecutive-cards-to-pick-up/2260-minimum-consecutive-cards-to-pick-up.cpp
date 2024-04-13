class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
      map<long long , long long> mp;
        long long mini=INT_MAX;
        for(int i=0;i<(int)cards.size();i++){
            if(mp.find(cards[i])!=mp.end()){
                mini=min(mini,i-mp[cards[i]]+1);
            }
            mp[cards[i]]=i;
        }
        return mini==INT_MAX?-1:mini;

    }
};