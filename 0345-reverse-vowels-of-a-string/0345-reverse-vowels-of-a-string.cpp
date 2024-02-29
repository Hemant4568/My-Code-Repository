class Solution {
public:
    string reverseVowels(string s) {
        set<char>se{'a','e','i','o','u','A','E','I','O','U'};
        int left=0,right=s.size()-1;
        while(left<right)
        {
            while(left<right && se.find(s[left])==se.end())
                left++;
             while(left<right && se.find(s[right])==se.end())
                right--;
            if(left<right)
            {
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};