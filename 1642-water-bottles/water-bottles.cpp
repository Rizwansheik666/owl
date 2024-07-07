class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int n=numBottles;
        int cnt=numBottles;
        while(n>=numExchange){
            cnt+=n/numExchange;
            n=(n%numExchange)+(n/numExchange);
        }
        return cnt;
    }
};