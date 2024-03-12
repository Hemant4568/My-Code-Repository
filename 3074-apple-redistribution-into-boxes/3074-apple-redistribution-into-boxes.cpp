class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=0;
        for(int it:apple)
            sum+=it;
        cout<<sum;
        sort(capacity.begin(),capacity.end());
        int c=0;
        int temp=0;
        for(int i=capacity.size()-1;i>=0;i--)
        {
            if(temp<sum)
            {
                temp+=capacity[i];
                c++;
            }
            else
                break;
                
        }
        return c;
    }
};