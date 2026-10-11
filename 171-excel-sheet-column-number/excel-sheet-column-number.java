class Solution {
    public int titleToNumber(String col) {
        long ans=0;
        for(int i=0;i<col.length();i++){
            char ch=col.charAt(i);
            ans=ans*26 +(ch-'A'+1);
        }
        return (int)ans;
    }
}