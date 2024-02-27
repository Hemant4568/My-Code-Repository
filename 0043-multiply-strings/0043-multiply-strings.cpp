class Solution {
public:
    string multiply(string num1, string num2) {
      int n=num1.size(),m=num2.size();
        vector<int>result(n+m,0);
        for(int i=n-1;i>=0;i--)
            for(int j=m-1;j>=0;j--)
            {
                int sum=result[i+j+1]+((num1[i]-'0')*(num2[j]-'0'));
                result[i+j]+=sum/10;
                result[i+j+1]=sum%10;
            }
        string mul;
        for(int digit:result)
            if(!(mul.empty() && digit==0))
                mul.push_back(digit+'0');
        return mul.empty() ? "0" : mul;
    }
};