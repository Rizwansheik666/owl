class Solution {
public:
    int cal(string p,char a,char b,int x,int y){
        int cnt=0;
        string s="";
        s+=p[0];
        for(int i=1;i<p.size();i++){
            if(!s.empty() and s.back()==a and p[i]==b){
                cnt+=x;
                s.pop_back();
            }
            else{
                s+=p[i];
            }
        }
        string l="";
        l+=s[0];
         for(int i=1;i<s.size();i++){
            if(!l.empty() and l.back()==b and s[i]==a){
                cnt+=y;
                l.pop_back();
            }
            else{
                l+=s[i];
            }
        }
        return cnt;
    }
    int maximumGain(string s, int x, int y) {
        if(x>y) return cal(s,'a','b',x,y);
        return cal(s,'b','a',y,x);
    }
};