class Solution {
    public int sumOfSquares(int[] nums) {
        int cnt=0,n=nums.length;
        for(int i=0;i<n;i++){
            if(n%(i+1) ==0){
                cnt+=nums[i]*nums[i];
            }
        }
        return cnt;
    }
}