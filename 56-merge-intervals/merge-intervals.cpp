class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            vector<int>temp=ans.back();
            if(temp[1]>=intervals[i][0]){
                ans.pop_back();
                ans.push_back({temp[0],
                    max(temp[1], intervals[i][1])
                });
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};