class Solution {
public:
    int minOperations(vector<int>& v, int k) {
        vector<int> freq(101, 0);

        for(int i = 0;i<v.size();i++){
            if(v[i] < k) return  -1;
            if(v[i] == k) continue; 
            freq[v[i]]++;
        }
        int cnt = 0;
        for(int i = 0;i<101;i++){
            if(freq[i] > 0) cnt++;
        }
        return cnt;
    }
};