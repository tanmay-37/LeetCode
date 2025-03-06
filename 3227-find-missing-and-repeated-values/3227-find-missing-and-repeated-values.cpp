class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& v) {
        int n = v.size();
        vector<int> freq(n*n + 1, 0);

        int repeat = -1, miss = -1;

        for(int i= 0;i<n;i++){
            for(int j = 0;j<n;j++){
                freq[v[i][j]]++;
            }
        }

        for(int i = 1;i<=n*n;i++){
            if(freq[i] == 2) repeat = i;
            if(freq[i] == 0) miss = i;

            cout<<freq[i]<<" ";
        }

        return {repeat, miss};
    }
};