class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>v;
        int i=nums1.size(),j=nums2.size();
        while(i>0 and j>0){
            if(nums1[nums1.size()-i]==nums2[nums2.size()-j]){
                v.push_back(nums1[nums1.size()-i]);
                i--;
                j--;
            }
            else if(nums1[nums1.size()-i]>nums2[nums2.size()-j]){
                j--;
            }
            else{
                i--;
            }
        }
        return v;
    }
};