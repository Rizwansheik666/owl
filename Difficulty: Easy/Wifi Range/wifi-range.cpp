class Solution {
  public:
    bool wifiRange(string &s, int x) {
        // code here
        int cnt0 = 0, n = s.size();
        for(int i = 0;i<n;i++){
            if(s[i] == '0')cnt0++;
            else{
                if(cnt0>x)return false;
                cnt0 = -x;
            }
        }
        if(cnt0>0)return false;
        return true;
    }
};