class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        string a="";
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
         for(auto it:mp)
        {
            pq.push({it.second, it.first});
        }
        while(pq.size()>0)
        {
            int count=pq.top().first;
            int character=pq.top().second;
            while(count>0)
            {
                a+=character;
                count--;
            }
            pq.pop();
        }
        return a;
    }
};