class Solution {
public:
    string addBinary(string a, string b) {
        string &res =(a.size()>= b.size()) ? a:b;
        int k=res.size()-1;
        int i=a.size()-1,j=b.size()-1;
        int c=0;
        while(k>=0){
            int A= i<0 ? 0 :a[i] & 1;
            int B= j<0 ? 0 :b[j] & 1;
            int s=(A^B)^c;
            int CNext=((A^B)&c) | (A&B);
            res[k]=s+'0';
            c=CNext;
            i--;j--;k--;
        }
        return c ?(res.insert(res.begin(),'1'),res):res;
    }
};