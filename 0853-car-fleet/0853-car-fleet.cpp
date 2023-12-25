class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<float>s;
        vector<pair<int,float>>v;
        int n=position.size();
        for(int i=0;i<n;i++)
        {
            v.push_back({position[i],float(target-position[i])/speed[i]});
        }
        sort(v.begin(),v.end());
        for(auto it:v)
        {
            float time=it.second;
            while(!s.empty() && time>=s.top())
                s.pop();
            s.push(time);
        }
        return s.size();
    }
};