class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>q;
        for(int i=0;i<amount.size();i++)
        {
            q.push(amount[i]);
        }
        int c=0;
        while(q.top()!=0)
        {
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            a--;
            b--;
            q.push(a);
            q.push(b);
            c++;
        }
        return c;
    }
};