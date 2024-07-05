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
            if(temp[i]==temp[i-1])
                c++;
            else
            {
                result+=to_string(c)+temp[i-1];
                c=1;
            }
        }
        result+=to_string(c)+temp.back();
        return result;
    }
};