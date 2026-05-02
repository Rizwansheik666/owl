class Solution {
public:
    bool is_present(string s,char n){
        return s.find(n)!= string::npos;
    }
    int rotatedDigits(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            string s=to_string(i);
            if(is_present(s,'3') or is_present(s,'7') or is_present(s,'4')){
                continue;
            }
            
            if(is_present(s,'2') or is_present(s,'5') or is_present(s,'6') or is_present(s,'9')){
                cnt++;
            }
        }
        return cnt;
    }
};