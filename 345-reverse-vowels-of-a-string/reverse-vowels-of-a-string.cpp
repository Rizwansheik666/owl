class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' ||c=='E' || c=='I' || c=='O' || c=='U')return true;
        return false;
    }
    string reverseVowels(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(j>i){
            if(isVowel(s[i]) and isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!isVowel(s[i]) and isVowel(s[j])){
                i++;
            }
            else if(isVowel(s[i]) and !isVowel(s[j])){
                j--;
            }
            else{
                j--;
                i++;
            }
        }
        return s;
    }
};