class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int i=0;

        int minSize=INT_MAX;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
        while(sum>=target){
            minSize=min(minSize,j-i+1);
            sum-=nums[i];
            i++;
        }
    }
       return minSize==INT_MAX?0:minSize;
  }
};