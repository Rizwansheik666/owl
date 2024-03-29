static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();

class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        int i=0,j=n-1;
        int maxw=0;
        while(i<j){
            maxw=max(maxw,((j-i)*min(arr[i],arr[j])));
            if(arr[i]<arr[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxw;
    }
};