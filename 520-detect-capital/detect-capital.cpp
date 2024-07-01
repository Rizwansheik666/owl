class Solution {
public:
    bool detectCapitalUse(string word) {
        if(isupper(word[0]) and isupper(word[1])){
            // bool flag=true; 
            for(int i=2;i<word.size();i++){
                if(!isupper(word[i])) {
                    return false;
                    break;
                }
            }
        }
        else if(islower(word[0]) and islower(word[1])){
            // bool flag=true; 
            for(int i=2;i<word.size();i++){
                if(!islower(word[i])) {
                    return false;
                    break;
                }
            }
        }
        else if(isupper(word[0]) and islower(word[1])){
            // bool flag=true; 
            for(int i=2;i<word.size();i++){
                if(!islower(word[i])){
                    return false;
                    break;
                }
            }
        }
        else if(islower(word[0]) and isupper(word[1])){
            return false;
        }
        return true;

    }
};