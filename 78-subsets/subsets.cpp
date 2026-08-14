class Solution {
public:
vector<vector<int>>ans;
 void solve(int i,vector<int>& nums,vector<int>&current){
     if(i==nums.size()){
        ans.push_back(current);
        return;
     }
            solve(i+1,nums,current);
            current.push_back(nums[i]);
            solve(i+1,nums,current);

            current.pop_back();
         }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>current;
        solve(0,nums,current);
        return ans;
        
    }
};