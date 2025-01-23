class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        vector<int> rowServer(r, 0);
        vector<int> colServer(c, 0);

        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(grid[i][j] == 1){
                    rowServer[i]++;
                    colServer[j]++;
                }
            }
        }
        int res = 0;
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(grid[i][j] == 1 && (rowServer[i] > 1 || colServer[j] > 1)) res++;
            }
        }
        return res;
    }
};