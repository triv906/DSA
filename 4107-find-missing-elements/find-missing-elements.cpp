class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int smallest=nums[0];
        int largest=nums[nums.size()-1];
        set<int>st(nums.begin(),nums.end());
        for(int i=smallest;i<=largest;i++){
            if(st.find(i)==st.end())
            ans.push_back(i);
        }
        return ans;    
    }
};