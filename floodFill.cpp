class Solution {
public:
    void dfs(int i,int j,int newColor,int oldColor,vector<vector<int>>& image)
    {
        int n=image.size(),m=image[0].size();
        if(i<0|| j<0)return;
        if(i>=n || j>=m)return;
        if(image[i][j]!=oldColor)return;
        image[i][j]=newColor;
        dfs(i-1,j,newColor,oldColor,image);
        dfs(i+1,j,newColor,oldColor,image);
        dfs(i,j-1,newColor,oldColor,image);
        dfs(i,j+1,newColor,oldColor,image);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]!=newColor)
            dfs(sr,sc,newColor,image[sr][sc],image);
        return image;
    }
};