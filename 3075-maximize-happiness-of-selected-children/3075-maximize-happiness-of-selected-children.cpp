class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0;
        sort(happiness.begin(),happiness.end(),greater<int>());
        for(int i=0;i<happiness.size();i++)
        {
            if(k>0)
            {
                int temp=happiness[i]-i;
                if(temp>0){
                sum+=temp;
                k--;}
                else
                    break;
            }
            else
                break;
            
        }
        
        return sum;
    }
};