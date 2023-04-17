class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int m=0;
        vector<bool>result;
        for(int i=0;i<n;i++)
        {
            m=max(m,candies[i]);
        }
        for(int i=0;i<n;i++)
        {
            int a= candies[i]+extraCandies;
            
            if(a>=m)
                result.push_back(true);
            else
                result.push_back(false);
        }
        
        return result;
    }
};