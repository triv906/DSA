class Solution {
public:
int solve(int row,int col,vector<vector<int>>& triangle,vector<vector<int>>&dp,vector<vector<int>>& visited){
    if(row==triangle.size()-1){
        return triangle[row][col];
    }
    if (visited[row][col] == 1) {
            return dp[row][col];
        }
    int down=solve(row+1,col,triangle,dp,visited);
    int diagonal=solve(row+1,col+1,triangle,dp,visited);
    dp[row][col]= triangle[row][col] + min(down,diagonal);
      visited[row][col] = 1;
        return dp[row][col];
}
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>dp(triangle.size(),vector<int>(triangle.size(),0));
          vector<vector<int>> visited(triangle.size(), vector<int>(triangle.size(), 0));
        return solve(0,0,triangle,dp,visited);
    }
};