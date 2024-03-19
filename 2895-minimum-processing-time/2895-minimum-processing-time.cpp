class Solution {
public:
      static bool compareDescending(int a, int b) {
    return a > b; 
}
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        int maxi1=0;
        sort(tasks.begin(),tasks.end(),compareDescending);
        sort(processorTime.begin(),processorTime.end());
        int j=0;
        int n=processorTime.size();
        for(int i=0;i<tasks.size();i++)
        {
           maxi1=max(maxi1,(processorTime[j]+tasks[i]));
               if(i==4*(j+1)-1)
                   j++;
        }
        return maxi1;
    }
};