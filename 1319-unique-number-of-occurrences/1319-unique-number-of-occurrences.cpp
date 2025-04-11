class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> v;

        for(int i : arr) v[i]++;
        
        unordered_set<int> s;
        for(auto &[key, val] : v){
            if(s.count(val)) return false;
            s.insert(val);
         }
         return true;
    }
};