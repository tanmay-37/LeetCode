class Solution {
public:

    int numberOfSubstrings(string s) {
        int n = s.size(), l = 0, cnt = 0;
        unordered_map<char, int> m;
        for(int r = 0;r<n;r++){
            m[s[r]]++;
            while(m.size() == 3){
                m[s[l]]--;
                if(m[s[l]] == 0) m.erase(s[l]);
                cnt += n - r;
                l++; 
            }
        }
        return cnt;
    }
};