class Solution {
public:
    // struct Node{
    //     int s,c,k1;
    // };
    int dp[101][101];
    int find_cheap(vector<pair<int,int>> adj[],int src,int dst,int k){
        if(src==dst && k>=-1) return 0;
        if(k<0) return 1e5;
        if(dp[src][k]!=-1) return dp[src][k];
        int ans=1e5;
        for(auto it:adj[src]){
            ans=min(ans,(it.second)+find_cheap(adj,it.first,dst,k-1));
        }
        return dp[src][k]=ans;
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // queue<Node>qq;
        // qq.push({src,0,k+1});
        memset(dp,-1,sizeof(dp));
        vector<pair<int,int>>adj[n];
        for(int i=0;i<(flights.size());i++){
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        int res=find_cheap(adj,src,dst,k);
        cout<<res<<endl;
       return res==1e5 ? -1 : res;
    }
};