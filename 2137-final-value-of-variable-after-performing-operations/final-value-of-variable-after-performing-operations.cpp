class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(string x : operations){
            if(x=="++X" || x=="X++"){
                ans++;
            }
            else if(x=="--X" || x=="X--"){
                ans--;
            }
        }
        return ans;
    }
};