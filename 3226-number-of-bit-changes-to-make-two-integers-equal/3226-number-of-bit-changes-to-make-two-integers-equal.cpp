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
         bitset<32> binary1(n);
    bitset<32> binary2(k);
        string temp=binary1.to_string();
        string temp1=binary2.to_string();
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