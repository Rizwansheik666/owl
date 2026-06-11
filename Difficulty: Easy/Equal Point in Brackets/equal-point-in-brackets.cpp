class Solution {
  public:
    int findIndex(string &s) {
        // code here
        int n = s.size(), ob = 0, cb;
        
        cb = count(s.begin(), s.end(), ')');
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '(')
                ob++;
            else if(s[i] == ')')
                cb--;
                
            if(ob == cb)
                return i + 1;
        }
        
        return ob == n ? 0 : n;
    }
};