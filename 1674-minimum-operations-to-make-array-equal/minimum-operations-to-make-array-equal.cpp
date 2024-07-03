class Solution {
public:
    int minOperations(int n) {
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=abs(n-((2*i)+1));
        }
        return cnt/2;
    }
};