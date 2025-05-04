class Solution {
public:
    int findKthPositive(vector<int>& v, int k) {
        int l = 0, h = v.size() - 1;
        int res = v.size() + k;

        while(l <= h){
            int m = (l + h) / 2;
            if(v[m] > m + k){
                res = m + k;
                h = m - 1;
            }
            else l = m + 1;
        }
        return res;
    }
};