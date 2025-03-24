class Solution {
public:
    int countDays(int days, vector<vector<int>>& v) {
        if (v.empty()) return days;

        int n = v.size();
        sort(v.begin(), v.end()); 

        long long diff = 0;
        int start = v[0][0], end = v[0][1];

        for (int i = 1; i < n; i++) {
            if (v[i][0] <= end) {  
                end = max(end, v[i][1]);
            } else {
                diff += (end - start + 1);
                start = v[i][0];
                end = v[i][1];
            }
        }
        diff += (end - start + 1);

        return days - diff;
    }
};
