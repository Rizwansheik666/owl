class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i=0;i<asteroids.size();i++){
            int n=asteroids[i];
            // if(st.empty())
            // if(!st.empty() and st.top()<0 and (n>0 or n<0)){
            //     st.push(n);
            // }
            while(!st.empty() and st.top()>0 and n<0){
                if(abs(st.top())>abs(n) ){
                    n=0;
                    break;
                }
                else if(abs(st.top())<abs(n) ){
                    st.pop();
                }
                else{
                    st.pop();
                    n=0;
                    break;
                }
            }
            if(n!=0){
                st.push(n);
                cout<<n<<" ";
            }
        }
        int it=st.size();
        vector<int>v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};