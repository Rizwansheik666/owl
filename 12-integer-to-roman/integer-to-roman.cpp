class Solution {
public:
    string intToRoman(int num) {
        // unordered_map<char, int> mp = {
        //     {'I', 1},
        //     {'V', 5},
        //     {'X', 10},
        //     {'L', 50},
        //     {'C', 100},
        //     {'D', 500},
        //     {'M', 1000}
        // };
        string s = "";
        while(num) {
             if(num >= 1000) {
                s += 'M';
                num -= 1000;
            } else if(num >= 900) {
                s += "CM";
                num -= 900;
            } else if(num >= 500) {
                s += 'D';
                num -= 500;
            } else if(num >= 400) {
                s += "CD";
                num -= 400;
            } else if(num >= 100) {
                s += 'C';
                num -= 100;
            } else if(num >= 90) {
                s += "XC";
                num -= 90;
            } else if(num >= 50) {
                s += 'L';
                num -= 50;
            } else if(num >= 40) {
                s += "XL";
                num -= 40;
            } else if(num >= 10) {
                s += 'X';
                num -= 10;
            } else if(num >= 9) {
                s += "IX";
                num -= 9;
            } else if(num >= 5) {
                s += 'V';
                num -= 5;
            } else if(num >= 4) {
                s += "IV";
                num -= 4;
            } else {
                s += 'I';
                num -= 1;
            }
        }

        return s;
    }
};