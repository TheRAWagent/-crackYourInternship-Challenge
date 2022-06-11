class Solution {
public:
    void dfs(int i,int j,vector<vector<char>> &grid,vector<vector<bool>> &vis)
    {
        int n=grid.size(),m=grid[0].size();
        if(i<0 || j < 0)return;
        if(i>=n || j>=m)return;
        if(grid[i][j]=='0')return;
        if(vis[i][j])return;
        vis[i][j]=true;
        dfs(i+1,j,grid,vis);
        dfs(i-1,j,grid,vis);
        dfs(i,j+1,grid,vis);
        dfs(i,j-1,grid,vis);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size(),count=0;
        vector<vector<bool>> vis(n);
        for(auto &i: vis)
            i.resize(m,false);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(vis[i][j])continue;
                if(grid[i][j]=='1')
                {
                count++;
                dfs(i,j,grid,vis);
                }
            }
        return count;
    }
};