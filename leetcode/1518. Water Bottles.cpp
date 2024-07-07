class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        if (numBottles < numExchange)
            return numBottles;
        if (numBottles == numExchange)
            return numBottles + 1;
        return (numBottles+ (numBottles-1)/(numExchange - 1));      
    }
};
