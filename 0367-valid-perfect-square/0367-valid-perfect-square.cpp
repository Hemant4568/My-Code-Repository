class Solution {
public:
    bool isPerfectSquare(int num) {
        int a=sqrt(num);
        if(a*a==num)
            return 1;
        else
            return 0;
    }
};