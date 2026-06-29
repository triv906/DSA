#include<bits/stdc++.h>
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            int n=nums2.size();
            unordered_map<int,int>next_greater;
            stack<int>st;
            for(int i=n-1;i>=0;i--){
                int num=nums2[i];
                while(!st.empty() && st.top()<=nums2[i]){
                    st.pop();
                }
                if(st.empty()){ next_greater[num]=-1;}
                else{next_greater[num]=st.top();}

                st.push(num);

            }
            vector<int>ans(nums1.size());
            for(int i=0;i<nums1.size();i++){
                ans[i]=next_greater[nums1[i]];
            }
            return ans;
    }
};