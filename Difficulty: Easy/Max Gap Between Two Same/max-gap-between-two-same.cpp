class Solution {
  public:
    int maxCharGap(string &s) {
        // code here
        int n = s.size();

        int Max = -1;

        for (int i = 0; i < n - 1; i++) {

            if (Max >= n - i - 2)
                break;

            for (int j = n - 1; j > i; j--) {

                if (s[i] == s[j]) {
                    Max = max(Max, j - i - 1);
                    break;
                }
            }
        }

        return Max;
    }
};