class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int k=piles.size()/3;
        int p=0;
        for(int i=piles.size()-2;i>=0;i-=2){
            if(k>0){
                p+=piles[i];
                k--;
            }
            else{
                break;
            }
        }
        return p;
    }
};