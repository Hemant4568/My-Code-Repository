class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int empty=numBottles;
        int finald=numBottles;
        while(empty>=numExchange)
        {
            empty-=numExchange;
            numExchange++;
            empty+=1;
            finald+=1;
        }
        return finald;
    }
};