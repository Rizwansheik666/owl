class Solution {
    public String convertToTitle(int col) {
        StringBuilder s = new StringBuilder();
        while(col>0){
            col--;
            char ch=(char)('A'+ col%26);
            s.append(ch);
            col=col/26;
        }
        return s.reverse().toString();
    }
}