class Solution {
public:
   static bool custom(string a,string b)
    {
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>temp;
        for(int i=0;i<nums.size();i++)
        {
            temp.push_back(to_string(nums[i]));
        }
        sort(temp.begin(),temp.end(),custom);
        string ans="";
        for(auto i:temp)
        {
            ans+=i;
        }
        if(ans[0]=='0')
            return "0";
        return ans;
    }
};