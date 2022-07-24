class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int> ans;
       int l=0,u=0,d=matrix.size()-1,r=matrix[0].size()-1;
        while(ans.size()<matrix.size()*matrix[0].size())
        {
            for(int i=l;i<=r;i++)
                ans.push_back(matrix[u][i]);
            u++;
            if(ans.size()==matrix.size()*matrix[0].size())break;
            for(int i=u;i<=d;i++)
                ans.push_back(matrix[i][r]);
            r--;
            if(ans.size()==matrix.size()*matrix[0].size())break;
            for(int i=r;i>=l;i--)
                ans.push_back(matrix[d][i]);
            d--;
            if(ans.size()==matrix.size()*matrix[0].size())break;
            for(int i=d;i>=u;i--)
                ans.push_back(matrix[i][l]);
            l++;
        }
        return ans;
    }
};