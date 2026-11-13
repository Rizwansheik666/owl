class Solution {
public:
    long long minimumCost(long long cost1, long long cost2, long long costBoth, long long need1, long long need2) {
        if(need1==0 and need2==0) return 0;
        if(need1>need2) return min((cost1*need1 + cost2*need2),(costBoth*(min(need1,need2))+(abs(need1-need2)*(min(costBoth,cost1)))));
        if(need1<need2) return min((cost1*need1 + cost2*need2),(costBoth*(min(need1,need2))+(abs(need1-need2)*(min(costBoth,cost2)))));
        return min((cost1*need1 + cost2*need2),(costBoth*(max(need1,need2))));
    }
};