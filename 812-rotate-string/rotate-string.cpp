class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.size();i++){
            if(s==goal){
                return true;
            }
            else{
                char p=goal.back();
                goal.pop_back();
                goal=p+goal;
            }
        }
        return false;
    }
};