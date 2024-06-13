class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        vector<int>temp;
        for(int i:arr1)
        {
            mp[i]++;
        }
        for(int i=0;i<arr2.size();i++)
        {
            if(mp.find(arr2[i])!=mp.end())
            {
                int itr=mp[arr2[i]];
                while(itr--)
                {
                    temp.push_back(arr2[i]);
                }
            }
            mp.erase(arr2[i]);
        }
        for(auto it:mp)
        {
                while(it.second--)
                temp.push_back(it.first);
        }
        return temp;
    }
};