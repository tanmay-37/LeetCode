class Solution {
    vector<int> nums;
public:
    int punishmentNumber(int n) {
        int result = 0;
        int i = 0;
        for (i = 0; i < nums.size(); i++) 
            result += nums[i] * nums[i];
        
        if (i != 0) 
            i = nums[nums.size() - 1];
        
        for (; i <= n; i++) {
            if (isValid(i * i, i)) {
                nums.push_back(i);
                result += i * i;
            }
        }
        return result;
    }

private:
    bool isValid(int n, int target) {
        if (n == target) return true;
        if (n == 0) return false;
        for (int i = 10; i <= n; i *= 10) {
            if (isValid(n / i, target - n % i)) 
                return true;
        }
        return false;
    }
};