class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int time = 0;
        double wt = 0.0;
        
        for(int i = 0; i < customers.size(); i++) {
            vector<int> v = customers[i];
            int arrive = v[0];
            int cookTime = v[1];
            
            if (time < arrive) {
                time = arrive;
            }
            
            wt += (time + cookTime - arrive);
            time += cookTime;
        }
        
        return wt / customers.size();
    }
};