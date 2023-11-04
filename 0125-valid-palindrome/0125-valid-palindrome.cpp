class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string str="";
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))
                
                str+=tolower(s[i]);
            
        }
       
        int a=str.size();
      for(int i=0;i<a/2;i++)
      {
          if(str[i]!=str[a-i-1])
              return 0;
      }
        return 1;
    }
};