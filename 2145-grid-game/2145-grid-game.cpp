class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        long long row1 = 0, row0 = 0;
        long long res = LONG_MAX;
        for(int i = 0;i<n;i++){
            row0 += grid[0][i];
        }


        for(int i = 0;i<n;i++){
            row0 -= grid[0][i];

            if(i != 0) row1 += grid[1][i - 1];

            res = min(res, max(row1, row0));
        }
        return res;


    }
};