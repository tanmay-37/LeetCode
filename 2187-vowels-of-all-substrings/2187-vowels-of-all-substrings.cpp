class Solution {
public:

    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

        long long countVowels(string s) {
        long cnt = 0, n = s.size();
        for (int i = 0; i < n; ++i)
            if (isVowel(s[i])) cnt += (i + 1) * (n - i);
        return cnt;
    }
};