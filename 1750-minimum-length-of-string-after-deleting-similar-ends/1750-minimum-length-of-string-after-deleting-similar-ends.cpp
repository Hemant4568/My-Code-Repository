class Solution {
public:
    int minimumLength(string s) {
        int left=0,right=s.size()-1;
        while(left<right)
        {
            if(s[left]!=s[right])
                break;
        char ch=s[left];
        while(left<=right && s[left]==ch)
            left++;
        while(left<=right && s[right]==ch)
            right--;
        }
        return right-left+1;
    }
};