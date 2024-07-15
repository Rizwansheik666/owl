class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,cnt=0;
        for(int j=0;j<k;j++){
            cnt+=nums[j];
            cout<<cnt<<" ";
        }
        double cntf=cnt;
        int j=k;
        double p=cntf;
        while(i<=nums.size()-k and j<nums.size()){
            p+=nums[j];
            cout<<p<<" ";
            p-=nums[i];
            j++;
            i++;
            cntf=max(cntf,p);
        }
        return cntf/k;
    }
};