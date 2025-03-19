class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt = 0;
        for ( int i = 0 ; i < nums.size() ; ++i ){
            if ( nums[i] == 0 ){
                if ( nums.size() - i < 3 ) return -1;
                cnt++;
                for ( int j = i ; j < i + 3 ; ++j ){
                    if ( nums[j] == 0 ) nums[j] = 1;
                    else nums[j] = 0;
                }   
            }
        }    
        return cnt;
    }
};