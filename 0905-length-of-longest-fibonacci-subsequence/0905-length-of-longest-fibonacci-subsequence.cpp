class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size(), prev1, prev2, len, maxLen = 0;
        unordered_set<int> s;

        if(n < 3){
            return 0;
        }

        for(int num : arr){
            s.insert(num);
        }

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                prev1 = arr[j];
                prev2 = arr[i];
                len = 2;
                int sum = prev1 + prev2;

                while(s.find(sum) != s.end()){
                    len++;
                    maxLen = max(maxLen, len);
                    prev2 = prev1;
                    prev1 = sum;
                    sum = prev1 + prev2;
                }
            }
        }

        return maxLen;
    }
};