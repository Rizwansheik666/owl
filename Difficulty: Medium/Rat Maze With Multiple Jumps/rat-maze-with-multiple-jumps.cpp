class Solution {
  public:
    bool solve(int i,int j,int n,vector<vector<int>>& mat,vector<vector<int>>& ans,vector<vector<int>>& memo){
        if(i==n-1 && j==n-1){
            ans[i][j]=1;
            return true;
        }
        if(i>=n || j>=n|| mat[i][j]==0){
            return false;
        }
        if(memo[i][j]==0){
            return false;
        }
        ans[i][j]=1;
        int maxJp=mat[i][j];
        
        for(int jump=1;jump<=maxJp;jump++){
            if(j+jump<n){
                if(solve(i,j+jump,n,mat,ans,memo)){
                    return true;
                }
            }
            
            if(i+jump<n){
                if(solve(i+jump,j,n,mat,ans,memo)){
                    return true;
                }
            }
        }
        ans[i][j]=0;
        memo[i][j]=0;
        return false;
    }
    vector<vector<int>> shortestDist(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        vector<vector<int>>ans(n,vector<int>(n,0));
        vector<vector<int>>memo(n,vector<int>(n,-1));
        if(solve(0,0,n,mat,ans,memo)){
            return ans;
        }
        return {{-1}};
    }
};