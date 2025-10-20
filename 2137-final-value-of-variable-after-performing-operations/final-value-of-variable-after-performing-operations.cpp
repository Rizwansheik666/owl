static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();

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