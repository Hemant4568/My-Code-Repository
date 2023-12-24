class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+" || tokens[i]=="*"|| tokens[i]=="-"|| tokens[i]=="/")
            {
                int y=s.top();
                s.pop();
                int x=s.top();
                s.pop();
                if(tokens[i]=="+")
                    s.push(x+y);
                 if(tokens[i]=="-")
                    s.push(x-y);
                if(tokens[i]=="*")
                    s.push(x*y);
                 if(tokens[i]=="/")
                    s.push(x/y);
            }
            else
            {
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};