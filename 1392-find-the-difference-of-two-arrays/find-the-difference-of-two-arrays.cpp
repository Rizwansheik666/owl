class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
         vector<vector<int>>res;
        vector<int>temp1;
        vector<int>temp2;
        for(auto it:mp1){
            if(mp2.find(it.first)==mp2.end()){
                temp1.push_back(it.first);
            }
        }
        for(auto it:mp2){
            if(mp1.find(it.first)==mp1.end()){
                temp2.push_back(it.first);
            }
        }
        res.push_back(temp1);
        res.push_back(temp2);
        return res;
    }
};