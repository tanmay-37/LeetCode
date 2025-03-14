class Solution {
public:
    int maximumCandies(vector<int>& c, long long k) {

        if(accumulate(c.begin(), c.end(), 0LL) < k) return 0;

        long long l = 1, h = *max_element(c.begin(), c.end()), ans = -1;
        while(l <= h){
            long long mid = (l + h) / 2;
            long long remCandy = 0;
            for(auto &can : c) remCandy += can / mid;

            if(remCandy >= k){
                ans = mid;
                l = mid + 1;
            }
            else h = mid - 1;
        }
        return ans;
    }
};