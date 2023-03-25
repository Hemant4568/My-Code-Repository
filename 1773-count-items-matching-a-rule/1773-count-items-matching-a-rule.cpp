class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rulekey, string rulevalue) {
            int c1=0;
           for(int i=0;i<items.size();i++)
           {
               for(int j=0;j<items[i].size();i++)
               {
                   if(rulekey=="type" )
                   {
                       if(items[i][0]==rulevalue)
                           c1++;
                       break;
                   }
                   if(rulekey=="color" )
                   {
                       if(items[i][1]==rulevalue)
                           c1++;
                       break;
                   }
                   if(rulekey=="name" )
                   {
                       if(items[i][2]==rulevalue)
                           c1++;
                       break;
                   }
               }
           }
        return c1;
         }
};