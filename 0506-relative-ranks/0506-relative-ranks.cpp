class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int>mp;
        vector<string>res(score.size());
        for(int i=0;i<score.size();i++)
        {
            mp[score[i]]=i+1;
        }
        sort(score.begin(),score.end());
        int a=4;
        for(int i=score.size()-1;i>=0;i--)
        {
           int j=mp[score[i]];
            if(i<=score.size()-4){
                res[j-1]=to_string(a);
                a++;
            }
            if(i==score.size()-1)
            res[j-1]="Gold Medal";
            else if(i==score.size()-2)
            res[j-1]="Silver Medal";
            else if(i==score.size()-3)
                res[j-1]="Bronze Medal";
        }
        return res;
    }
};
