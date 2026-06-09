class Solution {
  public:
    bool canSeatAllPeople(int k, vector<int> &seats) {
        // code here
         int n = seats.size();
        for (int i = 0; i < n - 1; i++) {
            if (seats[i] == 1 && seats[i + 1] == 1) {
                return false;
            }
        }
        for (int i = 0; i < n && k != 0; i++) {
            bool lE = (i == 0) || seats[i - 1] == 0;
            bool rE = (i == n - 1) || seats[i + 1] == 0;
            if (seats[i] == 0 && lE && rE) {
                seats[i] = 1;
                k--;
                i++;
            }
        }

        return k == 0;
    }
};