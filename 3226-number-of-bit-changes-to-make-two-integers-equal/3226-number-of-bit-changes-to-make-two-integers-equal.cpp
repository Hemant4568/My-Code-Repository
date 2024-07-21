class Solution {
public:
    string intToBinary(int num) {
    string binary = "";
    for (int i = 31; i >= 0; --i) {
        binary += (num & (1 << i)) ? '1' : '0';
    }
    return binary;
    }
    int minChanges(int n, int k) {
        string temp=intToBinary(n);
        string temp1=intToBinary(k);
        cout<<temp1;
        if(temp==temp1)
            return 0;
        int c=0;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]!=temp1[i] && temp[i]=='1'){
                c++;
                temp[i]='0';
            }
        }
        if(temp!=temp1)
            return -1;
        return c;
    }
};