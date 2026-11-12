class Solution {
public:
    int robLinear(vector<int>& nums,int start,int end) {
    vector<int>dp(end-start+1,0);
    dp[0]=nums[start];
    if(end-start+1>1){
        dp[1]=max(nums[start],nums[start+1]);
    }
    for(int i=2;i<dp.size();i++){
        int pick=nums[start+i]+dp[i-2];
        int notPick=dp[i-1];
        dp[i]=max(pick,notPick);
    }
    return dp[dp.size()-1];
    }
     int rob(vector<int>& nums) {

        int n = nums.size();

        if(n == 1) return nums[0];
        int case1=robLinear(nums,0,n-2);
        int case2=robLinear(nums,1,n-1);

        return max(case1,case2);
     }
};