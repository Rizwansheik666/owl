class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int OddSum=0,EvenSum=0;
        for(int i=1;i<=n*2;i++){
            if(i%2==0)EvenSum+=i;
            else OddSum+=i;
        }
        return gcd(OddSum,EvenSum);
    }
};