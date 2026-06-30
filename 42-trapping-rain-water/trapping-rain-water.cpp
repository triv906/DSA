#include<bits/stdc++.h>
class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        stack<int>st;
        int total=0;
        for(int i=0;i<n;i++){
            while(!st.empty() && height[st.top()]<height[i]){
                int pop_height=height[st.top()];
                st.pop();
                if (st.empty()){
                    break;
                }
                int distance =i -st.top()-1;
                int water=min(height[st.top()],height[i])-pop_height;
                total+=distance*water;
                }
            st.push(i);
        }
    return total;
    }
    
    };