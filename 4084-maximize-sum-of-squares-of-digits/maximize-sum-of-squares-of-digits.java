class Solution {
    public String maxSumOfSquares(int num, int sum) {
        if((float)sum/num>9) return "";
        String ans="";
        if(sum<=9){
            ans+=sum;
            ans += "0".repeat(num - 1);
            return ans;
        }
        else{
            int cnt = sum / 9;
            int rem = sum % 9;
            ans += "9".repeat(cnt);
            if (rem > 0) {
                ans += rem;
                cnt++;
            }
            ans += "0".repeat(num - cnt);
        }
        return ans;
    }
}