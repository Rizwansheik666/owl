class Solution {
  public:
    int maxSubstring(string &s) {
        // code here
        int mx=-1,Zero_c=0,One_c=0,n=0;
        for(auto c:s){
            if(c=='0'){
                One_c++;
            }
            else{
                Zero_c++;
                n++;
            }
            
            if(Zero_c>One_c){
                One_c=0;
                Zero_c=0;
            }
            mx=max(One_c-Zero_c,mx);
        }
        return (n==s.size()) ? -1 : mx;
        
    }
};