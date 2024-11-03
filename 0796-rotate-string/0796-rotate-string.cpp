class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=1;i<s.size();i++)
        {
            string s1=s;
            if(s1==goal)
                return 1;
            rotate(s1.begin(), s1.begin() + i, s1.end());
            if(s1==goal)
                return 1;
        }
        return 0;
    }
};