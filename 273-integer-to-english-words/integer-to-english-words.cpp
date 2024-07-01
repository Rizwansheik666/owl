class Solution {
public:
   string helper(int num, unordered_map<int, string>& m) {
        if (num == 0) return "";
        if (num < 20) return m[num];
        if (num < 100) return m[num / 10 * 10] + (num % 10 ? " " + m[num % 10] : "");
        return m[num / 100] + " " + m[100] + (num % 100 ? " " + helper(num % 100, m) : "");
    }
    string numberToWords(int num) {
        unordered_map<int, string> m = {
            {0, "Zero"}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
            {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"},
            {10, "Ten"}, {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"},
            {14, "Fourteen"}, {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"},
            {18, "Eighteen"}, {19, "Nineteen"}, {20, "Twenty"}, {30, "Thirty"},
            {40, "Forty"}, {50, "Fifty"}, {60, "Sixty"}, {70, "Seventy"},
            {80, "Eighty"}, {90, "Ninety"}, {100, "Hundred"}, {1000, "Thousand"},
            {1000000, "Million"}, {1000000000, "Billion"}
        };
        if (num == 0) return m[0];
        string res = "";
        int i = 0;
        while (num) {
            if (num % 1000) {
                res = helper(num % 1000, m) + (i > 0 ? " " + m[pow(1000, i)] : "") + (res.empty() ? "" : " " + res);
            }
            num /= 1000;
            i++;
        }

        return res;
    }
};