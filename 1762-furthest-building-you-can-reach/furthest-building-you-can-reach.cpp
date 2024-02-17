class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int>pq;
        int i=0;
        for(i=0;i<h.size()-1;i++){
            int x=h[i+1]-h[i];
            if(x<=0) continue;
            b-=x;
            pq.push(x);
            if(b<0){
                b+=pq.top();
                pq.pop();
                l--;
            }
            if(l<0)break;
        }
        return i;
    }
};