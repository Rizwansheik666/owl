class Solution {
    static int Func(int n){
        if(n<=1) return n;
        return Func(n-1)+Func(n-2);
    }
    public int fib(int n) {
        return Func(n);
    }
}