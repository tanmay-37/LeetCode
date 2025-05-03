class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& v) {
        sort(v.begin(), v.end());
        int n = v.size();
        int cnt = 0;
        int e = v[0][1];
        for(int i = 1;i<n;i++){
            if(v[i][0] < e){
                e = min(e, v[i][1]);
                cnt++;
            }
            else e = v[i][1];
        }
        return cnt;
    }
};