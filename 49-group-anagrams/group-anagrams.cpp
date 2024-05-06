class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        map<string,vector<string>>vis;
        for(int i=0;i<strs.size();i++){
            string fin = strs[i];
            sort(fin.begin(),fin.end());
            vis[fin].push_back(strs[i]);
        }
        for(auto it : vis){
            v.push_back(it.second);
        }
        return v;
    }
};