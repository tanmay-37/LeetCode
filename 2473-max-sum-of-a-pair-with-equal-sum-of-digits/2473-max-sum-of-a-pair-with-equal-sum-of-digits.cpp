class Solution {
public:

    int sumOfDigits(int n) {
        int sum = 0;
        while (n != 0) {

            int rem = n % 10;
            sum += rem;
            n /= 10;
        }
        return sum;
    }


    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> m;
        for(int num : nums){
            m[sumOfDigits(num)].push_back(num);
        }
        int maxI = -1;
        for(auto [sum, num] : m){
            if(num.size() > 1){
                sort(num.rbegin(), num.rend());
                maxI = max(maxI, num[0] +  num[1]);
            }
        }
        return maxI;
    }
};