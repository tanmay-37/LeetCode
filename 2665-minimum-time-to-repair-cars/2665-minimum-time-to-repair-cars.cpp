class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long l = 0, h = 1LL * (*max_element(ranks.begin(), ranks.end())) * cars * cars, ans = -1;
        while(l <= h){
            long long time = 0;
            long long mid = (l + h) / 2;
            for(auto &r : ranks) time += sqrt(mid /  r);

            if(time >= cars) {
                ans =mid;
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};