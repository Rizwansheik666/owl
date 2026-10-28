class Solution {
    static void Func(int ind,List<Integer>temp,int[] arr,List<List<Integer>>ans,int target,int cnt){
        if(target==cnt){
            ans.add(new ArrayList<>(temp));
            return;
        }
        if(ind >= arr.length || cnt > target) return;
        temp.add(arr[ind]);
        cnt+=arr[ind];
        Func(ind,temp,arr,ans,target,cnt);
        temp.remove(temp.size()-1);
        cnt-=arr[ind];
        Func(ind+1,temp,arr,ans,target,cnt);
        return;
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans=new ArrayList<>();
        Func(0,new ArrayList<>(),candidates,ans,target,0);
        return ans;
    }
}