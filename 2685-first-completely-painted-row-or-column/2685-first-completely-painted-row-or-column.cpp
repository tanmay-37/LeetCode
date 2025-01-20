class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<pair<int, int>> idx(n*m + 1);
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                idx[mat[i][j]] = {i, j};
            }
        }

        vector<int> row(n, 0);
        vector<int> col(m, 0);

        for(int i = 0;i<n*m;i++){
            row[idx[arr[i]].first]++;
            col[idx[arr[i]].second]++;

            if(row[idx[arr[i]].first] == m || col[idx[arr[i]].second] == n) return i;
        }
        return n*m - 1;

    }
};