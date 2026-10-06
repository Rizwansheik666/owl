class Solution {
    public int minAddToMakeValid(String s) {
        Stack<Character>st = new Stack<>();
        int cnt=0;
        for(int i=0;i<s.length();i++){
            char c=s.charAt(i);
            if(!st.empty()){
                if(st.peek()=='(' && c==')'){
                    st.pop();
                }
                else{
                    st.push(c);
                }
            }
            else{
                st.push(c);
            }
        }
        return st.size();
    }
}