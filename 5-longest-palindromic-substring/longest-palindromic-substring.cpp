#include<bits/stdc++.h>
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        int longestLength=1;
        int start=0;
        for(int i=0;i<n;i++){
            dp[i][i]=true;
        }
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++){
                 int currentLength=j-i+1;
                if(s[i]==s[j]){
                    if(j-i==1){
                        dp[i][j]=true;
                    }
                    else{
                dp[i][j]=dp[i+1][j-1];
                    }
                    if(dp[i][j]){
                if(currentLength>longestLength){
                longestLength=currentLength;
                start=i;
                }
            }
        }
                else{
                    dp[i][j]=false;
                }
            }
        }    
        return s.substr(start,longestLength);
    }
};