class Solution {
public:

    long long minTime(vector<int>& p, int k, int mid){
        long long tHrs = 0;
        for(auto &c : p){
            tHrs += (c + mid - 1) / mid;
            if(tHrs > k) return tHrs;
        }
        return tHrs;
    }

    int minEatingSpeed(vector<int>& p, int k) {
        long long l = 1, h = *max_element(p.begin(), p.end()), ans = -1;

        while(l <= h){
            int mid = (l + h) / 2;
            long long tHrs = 0;
            for(auto &c : p){
                tHrs += (c + mid - 1) / mid;
            }
            if(tHrs <= k){
                ans = mid;
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};