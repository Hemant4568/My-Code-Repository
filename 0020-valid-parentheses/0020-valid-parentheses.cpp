class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='('||s[i]=='{'||s[i]=='[')
               s1.push(s[i]);
           else
           {
               if(!s1.empty())
               {
                   if((s[i]==')'&& s1.top()=='(')||(s[i]=='}'&& s1.top()=='{')||(s[i]==']'&& s1.top()=='['))
                   {
                       s1.pop();
                   }
                   else
                       return 0;
               }
                 else
               return 0;
           }
         

       }
        if(s1.empty())
            return 1;
        return 0;
    }
};

    