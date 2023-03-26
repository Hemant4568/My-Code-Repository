class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        int n=prices.size();
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[j]<=prices[i]){
                    prices[i]=prices[i]-prices[j];
                    ans.push_back(prices[i]);
                       break;
                }
                if(prices[j]>prices[i])
                {
                    if(j==prices.size()-1)
                        ans.push_back(prices[i]);
                        else
                            continue;
                }
            }
        }
        ans.push_back(prices[n-1]);
        return ans;
    }
};