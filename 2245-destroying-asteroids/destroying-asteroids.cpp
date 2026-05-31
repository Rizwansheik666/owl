class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long temp=mass;
        for(long long i=0;i<asteroids.size();i++){
            if(temp<asteroids[i]){
                return false;
                break;
            }
            else{
                temp+=asteroids[i];
            }
        }
        return true;
    }
};