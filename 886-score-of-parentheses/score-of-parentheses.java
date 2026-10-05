class Solution {
    public int scoreOfParentheses(String s) {
        int cnt=0;
        Stack<Integer>st=new Stack<>();
        for(int i=0;i<s.length();i++){
            char c=s.charAt(i);
            if(c=='('){
                st.push(cnt);
                cnt=0;
            }else{
                cnt=st.peek()+ Math.max(cnt*2,1);
                st.pop();
            }
        }
        return cnt;
    }
}