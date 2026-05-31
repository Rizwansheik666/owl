class Solution {
  public:
    bool isSumOfConsecutive(int n) {
        // code here
        if(n==1)return false;
        int cnt=1;
        int last=1;
        int l=2;
        while(n-cnt>=0){
            if((n-cnt)%l==0) return true;
            last++;
            cnt+=last;
            l++;
        }
        return false;
    }
};