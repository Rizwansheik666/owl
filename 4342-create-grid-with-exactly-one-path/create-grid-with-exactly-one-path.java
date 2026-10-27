class Solution {
    public String[] createGrid(int m, int n) {
        String[] arr=new String[m];
        Arrays.fill(arr,"#".repeat(n-1)+".");
        arr[0]=".".repeat(n);
        return arr;
    }
}