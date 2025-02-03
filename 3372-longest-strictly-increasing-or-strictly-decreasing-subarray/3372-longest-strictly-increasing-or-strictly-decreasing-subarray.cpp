class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1, dec = 1;
        int ans = 1;
        for(int i = 1;i<nums.size();i++){
            if(nums[i - 1] < nums[i]){
                inc++;
                dec = 1;
            }
            else if(nums[i] < nums[i-1]){
                dec++;
                inc = 1;
            }
            else inc = dec = 1;

            ans = max({ans, inc, dec});
        }

        return ans;
    }
};