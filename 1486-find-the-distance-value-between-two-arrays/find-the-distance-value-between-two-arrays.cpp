class Solution {
public:
    bool isVal(int n,vector<int>&arr,int d){
        for(int l:arr){
            if(abs(l-n)<=d)return false;
        }
        return true;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt=0;
        for(int l:arr1){
            if(isVal(l,arr2,d))cnt++;
        }
        return cnt;
    }
};