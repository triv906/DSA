class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0];
        int mini=nums[0];
        int ans=maxi;
        for(int i=1;i<=nums.size() - 1;i++){
            int newMax=max(nums[i],max(maxi*nums[i],mini*nums[i]));
            int newMin=min(nums[i],min(maxi*nums[i],mini*nums[i]));
            maxi=newMax;
            mini=newMin;
            ans=max(ans,maxi);
        }
        return ans;
        
    }
};