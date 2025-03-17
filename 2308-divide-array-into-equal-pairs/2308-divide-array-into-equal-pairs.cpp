class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> v(501,0);

        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }

        int req_pairs = nums.size()/2;
        int count=0;

        for(int i=0;i<v.size();i++){
            count += v[i]/2;
        }

        return count==req_pairs;
    }
};