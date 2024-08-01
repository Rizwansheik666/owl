class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(int i=0;i<details.size();i++){
            string temp=details[i];
            string s = temp.substr(11, 2);
            int ans=stoi(s);
            if(ans>60){
                cnt++;
            }
        }
        return cnt;
        
    }

};