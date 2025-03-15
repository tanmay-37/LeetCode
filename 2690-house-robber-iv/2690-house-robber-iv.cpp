class Solution {
public:

    bool minK(vector<int>& nums, int k, int mid){
        int noOfHouse = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] <= mid){
                noOfHouse++;
                i++;
            }
        }
        return noOfHouse >= k;
    }

    int minCapability(vector<int>& nums, int k) {
        int l = *min_element(nums.begin(), nums.end());
        int h = *max_element(nums.begin(), nums.end());
        int ans = -1;

        while(l <= h){
            int mid = (l + h) / 2;
            if(minK(nums, k, mid)){
                ans = mid;
                h = mid - 1;
            }
            else l = mid + 1;
        }

        return ans;
    }
};