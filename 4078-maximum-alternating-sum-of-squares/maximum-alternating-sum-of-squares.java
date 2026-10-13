class Solution {
    public long maxAlternatingSum(int[] nums) {
        for(int i=0;i<nums.length;i++){
            nums[i]= Math.abs(nums[i]);
        }
        Arrays.sort(nums);
        long ans=0;
        int i=0,j=nums.length-1;
        while(i<=j){
            if(i==j){
                ans+=(nums[j]*nums[j]);
            }
            ans+=(nums[j]*nums[j]);
            ans-=(nums[i]*nums[i]);
            i++;
            j--;
        }
        return ans;
    }
}