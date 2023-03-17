class Solution {
public:
    int maximum69Number (int num) {
        string a=to_string(num);
        int n=a.length();
        for(int i=0;i<n;i++)
        {
            
            if(a[i]=='6'){
                a[i]='9';
                break;
            }
            else
                a[i]='9';
        }
        int z=stoi(a);
        return z;
    }
};