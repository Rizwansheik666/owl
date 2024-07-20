class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=rowSum.size() , m=colSum.size();
        vector<vector<int>>ans(n,vector<int>(m,0));

        priority_queue< pair<int,int> ,vector<pair<int,int>> , greater<pair<int,int> > >row,col;
        
        for(int i=0;i<n;i++){
            row.push({rowSum[i],i});
        }

        for(int i=0;i<m;i++){
            col.push({colSum[i],i});
        }

        while(!row.empty() and !col.empty()){
            auto x=row.top(),y=col.top();
            row.pop();
            col.pop();
            if(x.first<y.first){
                ans[x.second][y.second]=x.first;
                col.push({y.first-x.first,y.second});
            }
            else{
                ans[x.second][y.second]=y.first;
                row.push({x.first-y.first,x.second});
            }
        }
        return ans;
    }
};