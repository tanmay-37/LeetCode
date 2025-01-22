class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<pair<int, int>> hash(256, {-1, -1});
        for(int i = 0;i<s.size();i++){
            if(hash[s[i]].first == -1 && hash[t[i]].second == -1){
                hash[s[i]].first = t[i];
            }
            else{
                if(hash[s[i]].first != t[i]) return false;
                else continue;
            }
            hash[t[i]].second++;
        }
        return true;
    }
};