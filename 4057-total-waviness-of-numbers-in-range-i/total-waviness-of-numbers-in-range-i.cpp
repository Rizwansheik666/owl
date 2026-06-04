class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i=num1;i<=num2;i++){
            string temp=to_string(i);
            int l=0,r=2,m=1;
            while(r<temp.size()){
                if((temp[l]< temp[m] and temp[r]<temp[m]) or (temp[l]> temp[m] and temp[r]>temp[m])){
                    ans++;
                    l++;
                    r++;
                    m++;
                }
                else{
                    l++;
                    r++;
                    m++;
                }
            }
        }
        return ans;
    }
};