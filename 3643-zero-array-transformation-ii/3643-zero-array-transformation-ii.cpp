class Solution {
public:
    bool isZero(vector<int>& nums, vector<vector<int>>& q, int mid) {
        int n = nums.size();
        vector<int> prefix(n + 1, 0);
        int sum = 0;

        for (int i = 0; i < mid; i++) {
            int l = q[i][0], r = q[i][1], val = q[i][2];
            prefix[l] += val;
            if (r + 1 < n) prefix[r + 1] -= val;
        }

        for (int i = 0; i < n; i++) {
            sum += prefix[i]; 
            if (sum < nums[i]) return false; 
        }

        return true;
    }

    int minZeroArray(vector<int>& nums, vector<vector<int>>& q) {
        int l = 0, h = q.size(), ans = -1;

        while (l <= h) {
            int mid = (l + h) / 2;
            if (isZero(nums, q, mid)) {
                ans = mid;
                h = mid - 1; 
            } else {
                l = mid + 1; 
            }
        }

        return ans;
    }
};
