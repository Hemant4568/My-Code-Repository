class Solution {
public:
    int splitNum(int num) {
     string a=to_string(num);
        sort(a.begin(),a.end());
        string x=" ";
        string y=" ";
        for(int i=0;i<a.size();i++)
        {
            if(i%2==0)
            x+=a[i];
            else
            y+=a[i];
        }
        int n=stoi(x);
        int m=stoi(y);
        return (n+m);
    }
};