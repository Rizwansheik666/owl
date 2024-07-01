class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cnt=3;
        for(int i=0;i<arr.size();i++){
            if(cnt==0){
                return true;
            }
            else{
                if(arr[i]%2==1) cnt--;
                else cnt=3;
            }
        }
        return cnt==0;
    }
};