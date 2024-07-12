class Solution {
public:
    int maximumGain(string str, int x, int y) {
       long int ans=0;
        int hoo=y;
        string ab="ba";
        if(x>y) {
            reverse(ab.begin(),ab.end());
            hoo=x;
        }
        int j=-1;
        int n=str.length();
        int prev=0;
        int count=0;
        int val=0;
        while(count<2) {
            prev=n;
            if(val==prev) {
                count++;
            }
            else {
                val=prev;
                count=0;
            }
            int i=0;
                for(i=0;i<n;i++) {
                    if(j==-1) {
                        j++;
                        str[j]=str[i];
                    }
                    else if(str[j]==ab[0] && str[i]==ab[1]) {
                        ans+=hoo;
                        j--;
                    }
                    else {
                        j++;
                        str[j]=str[i];
                    }
                }
            i=n-1;
            if(j==-1) break;
            while(i>j) {
                str.pop_back();
                i--;
            }
            reverse(ab.begin(),ab.end());
            n=j+1;
            j=-1;
            if(hoo==x) hoo=y;
            else hoo=x;
        }
        return ans;
    }
};