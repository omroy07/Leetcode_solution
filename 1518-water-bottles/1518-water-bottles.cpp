class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int d = 0, e = 0;
        while(numBottles > 0){
            d += numBottles;
            e += numBottles;
            numBottles = e/numExchange;
            e = e%numExchange;
        }
        return d;
    }
};