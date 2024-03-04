class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,score=0;
        while(!tokens.empty()){
            int j=tokens.size()-1;
            if(tokens[i]<=power){
                score++;
                power-=tokens[i];
                tokens.erase(tokens.begin()+i);
            }
            else if(score!=0 and i!=j){
                score--;
                power+=tokens[j];
                tokens.erase(tokens.begin()+j);
            }
            else{
                break;
            }
        }
    return score;
    }
};