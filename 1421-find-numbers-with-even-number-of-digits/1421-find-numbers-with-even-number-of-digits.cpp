class Solution {
public:
    int findNumbers(vector<int>& v) {
        int cnt = 0;
        for(int i = 0;i<v.size();i++){
            int l = floor(log10(v[i]) + 1);
            if(l % 2 == 0) cnt++;
        }
        return cnt;
    }
};