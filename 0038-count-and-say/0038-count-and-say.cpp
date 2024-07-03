class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string temp=countAndSay(n-1);
        int c=1;
        string result="";
        char current=temp[0];
        for(int i=1;i<temp.size();i++)
        {
            if(temp[i]==current)
                c++;
            else
            {
                result+=to_string(c)+current;
                 current=temp[i];
                c=1;
            }
        }
        result+=to_string(c)+current;
        return result;
    }
};