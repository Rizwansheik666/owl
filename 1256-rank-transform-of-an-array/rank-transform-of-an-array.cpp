class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sr = arr;
        sort(sr.begin(), sr.end());
        unordered_map<int, int> mp;
        int currR = 1;

        for (int num : sr) {
            if (!mp.count(num)) {
                mp[num] = currR++;
            }
        }
        for (int &num : arr) {
            num = mp[num];
        }
        return arr;
    }
};