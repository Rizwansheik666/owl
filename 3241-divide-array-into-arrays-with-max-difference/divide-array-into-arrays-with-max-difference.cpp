class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        int n=nums.size(),p=n/3,z=0,x=1;
        int i=0,j=i+2;
        while(j<n){
            if(nums[j]-nums[i]<=k){
                v.push_back({nums[i],nums[i+1],nums[i+2]});
                i+=3;
                j=i+2;
            }
            else{
                x=0;
                break;
            }
        }
        // for(int i=0;i<p;i++){
        //     vector<int>temp;
        //     for(int j=0;j<3;j++){
        //         if(abs(nums[z]-nums[z+1])<=k){
        //             temp.push_back(nums[z]);
        //             z++;
        //         }
        //         else{
        //             x=0;
        //             return v;
        //         }
        //     }
        //     v.push_back(temp);
        // }
        if(x==1) return v;
        else return {};
    }
};