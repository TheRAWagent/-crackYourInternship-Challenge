class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows,collums;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(matrix[i][j]==0)
                {
                    rows.push_back(i);
                    collums.push_back(j); 
                }
        for(auto j:rows)
            for(int i=0;i<n;i++)
                matrix[j][i]=0;
        for(auto i:collums)
            for(int j=0;j<m;j++)
                matrix[j][i]=0;
        return;
    }
};