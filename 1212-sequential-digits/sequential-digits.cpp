class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s= "123456789";
        vector<int>v;
        for(int i =0;i<s.size();i++){
            for(int j =i+1;j<=s.size();j++){
                string p=s.substr(i,j-i);
                int res = stoi(p);
                if(res<=high && res>=low)v.push_back(res);
            }
        }
        sort(v.begin(),v.end());
        return v;

    }
};