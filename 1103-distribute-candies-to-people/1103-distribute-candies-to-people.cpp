class Solution {
public:
    vector<int> distributeCandies(int candies, int len) {
    int i=0;
    int a=1;
    vector<int>ans(len,0);
   while(1){  
       if(candies<a){
           ans[i]+=candies;
           break;
       } 
       ans[i]+=a;
       candies-=a;
       i=(i+1)%len;
       a++;
   }
    return ans;
}
};

