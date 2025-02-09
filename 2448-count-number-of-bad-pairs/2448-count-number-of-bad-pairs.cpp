class Solution {
public:
    long long countBadPairs(vector<int>& v) {
        //if(is_sorted(v.begin(), v.end())) return 0;
        int n = v.size();
        vector<long long> diff(n);
        for(int i = 0;i<n;i++){
            diff[i] = v[i] - i;
        }
        sort(diff.begin(), diff.end());

        long long notBad = 0;
        long long cnt = 1;

        for(int i = 1;i<n;i++){
            if(diff[i] == diff[i - 1]){
                cnt++;
            }
            else{
                notBad += cnt * (cnt - 1) / 2;
                cnt = 1;
            }
        }
        notBad += cnt * (cnt - 1) / 2;

        return (long long) n*(n - 1)/2 - notBad;
    }
};