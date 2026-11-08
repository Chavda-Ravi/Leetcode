class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int res=0;
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    bool b=false;
                    for(int k=0;k<n;k++)
                    {
                        if(k==i) continue;
                        if(grid[k][j]==1) b=true;
                    }
                    for(int k=0;k<m;k++)
                    {
                        if(k==j) continue;
                        if(grid[i][k]==1) b=true;
                    }
                    if(b) res++;
                }
            }
        }
        return res;
    }
};