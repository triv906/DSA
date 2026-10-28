class Solution {
public:
int solve(int i ,int j,int &row,int &col,vector<vector<int>>& dungeon,vector<vector<int>>&dp){

     if(i>=row || j>=col){
        return 1e9;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    
    if(i==row-1 && j==col-1){
        return dp[i][j]=max(1,1-dungeon[i][j]);
    }
    int right=solve(i,j+1,row,col,dungeon,dp);
    int down=solve(i+1,j,row,col,dungeon,dp);

    int final=min(down,right);
    return dp[i][j]=max(1,final-dungeon[i][j]);
}

    int calculateMinimumHP(vector<vector<int>>& dungeon) {

        int row=dungeon.size();
        int col=dungeon[0].size();
        vector<vector<int>>dp(row,vector<int>(col,-1));
        return solve(0,0,row,col,dungeon,dp);     
       }
};