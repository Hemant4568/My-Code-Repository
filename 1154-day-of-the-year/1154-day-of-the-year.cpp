class Solution {
public:
        bool leapYear(int yy){
   bool isLeapYear = false;
   if (yy % 4 == 0) {
      if (yy % 100 == 0) {
         if (yy % 400 == 0) {
            isLeapYear = true;
         }
      } 
      else isLeapYear = true;
   }
   return isLeapYear;
                }
    int dayOfYear(string date) {
        int yy=stoi(date.substr(0,4));
        int mm=stoi(date.substr(5,2));
        int dd=stoi(date.substr(8,2));
        int result=dd;
        vector<int>count {31,28,31,30,31,30,31,31,30,31,30,31};
            
        if(leapYear(yy))
            count[1]=29;
        for(int i=0;i<mm-1;i++)
        {
            result+=count[i];
        }
        return result;

    }
};