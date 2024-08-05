class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(string s:arr)
        {
            mp[s]++;
        }
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(mp[arr[i]]==1)
                c++;
            if(c==k)
                return arr[i];
        }
        return "";
    }
};