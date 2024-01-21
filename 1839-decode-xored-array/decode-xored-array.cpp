static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>v;
        v.push_back(first);
        for(int i=0;i<encoded.size();i++){
            int k=v[i]^encoded[i];
            v.push_back(k);
        }

        return v;
    }
};