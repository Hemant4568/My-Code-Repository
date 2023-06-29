class Solution {
public:
   int fact(int n) {
   if ((n==0)||(n==1))
   return 1;
   else
   return n*fact(n-1);
}
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int x = fact(n);

    while (x > 0) {
        ans.push_back(nums); 
        next_permutation(nums.begin(), nums.end()); 
        x--;
    }

    return ans;
    }
};