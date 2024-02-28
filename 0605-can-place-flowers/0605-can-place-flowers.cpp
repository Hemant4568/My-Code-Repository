class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool flag=false;
        int m=flowerbed.size();
        if(n==0)
            return 1;
        if(m==1 && flowerbed[0]==0 && n==1)
            return 1;
        if(flowerbed[0]==0 && flowerbed[1]!=1){
            flowerbed[0]=1;
            flag=true;
        n--;}for(int i=0;i<flowerbed.size();i++)
            cout<<flowerbed[i]<<" ";
        cout<<endl;
        
        if(n>0){
        for(int i=1;i<flowerbed.size()-1;i++)
        {
            if(flowerbed[i]==0 && flowerbed[i-1]!=1 && flowerbed[i+1]!=1){
                flowerbed[i]=1;
                
                flag=true;
            n--;}
            if(n==0)
                break;
        }
        }
        cout<<n;
        if(n>0)
        {
            if(flowerbed[m-1]==0 && flowerbed[m-2]!=1){
                flowerbed[m-1]=1;
                flag=true;
            n--;}
        }
        for(int i=0;i<flowerbed.size();i++)
            cout<<flowerbed[i]<<" ";
        if(n!=0)
            return 0;
        return flag;
    }
};