class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       /* vector<int>ans;
        int n=digits.size();
        long long int sum=0;
          for(int i=0;i<digits.size();i++)
          {
              if(n<0)
                  break;
              sum=sum+(pow(10,(n-1))*digits[i]);
              n--;
         }
        sum+=1;
      while(sum>0)
      {
         
          int a=sum%10;
          ans.push_back(a);
          sum=sum/10;
      }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
};*/

int n=digits.size()-1;
        while(n>=0){
            if(digits[n]==9)
                digits[n]=0;
            else{
                digits[n]+=1;
                return digits;
            }
            n--;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};