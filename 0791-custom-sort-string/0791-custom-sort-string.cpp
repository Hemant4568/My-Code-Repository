class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        map<char,int>mp;
        for(auto i:s)
            mp[i]++;
        for(auto it:order)
        {
            if(mp.find(it)!=mp.end())
            {
                while(mp[it]!=0){
                ans+=it;
                mp[it]--;
                }
            }
        }
        map<char,int>m;
        for(int i=0;i<ans.size();i++)
            m[ans[i]]++;
        for(auto itr:s)
            if(m.find(itr)==m.end())
                ans+=itr;
        return ans;
    }
};