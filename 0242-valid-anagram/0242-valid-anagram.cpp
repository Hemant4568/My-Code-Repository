class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        string temp=t;
        sort(temp.begin(),temp.end());
        cout<<s<<endl<<t;
        if(s==temp && s.size()==temp.size())
            return 1;
        return 0;
    
    }
};