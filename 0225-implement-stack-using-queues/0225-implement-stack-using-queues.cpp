class MyStack {
    queue<int>q1,q2;
public:
    
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int x = q1.front();
        q1.pop();
        swap(q1, q2);
        return x;
    }
    
    int top() {
        while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int b=q1.front();
        q2.push(q1.front());
        q1.pop();
        swap(q1,q2);
        return b;
    }
    
    bool empty() {
        if(q1.empty() && q2.empty())
            return 1;
        else
            return 0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
