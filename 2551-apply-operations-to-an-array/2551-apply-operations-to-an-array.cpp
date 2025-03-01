#include <vector>
using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& v) {
        int n = v.size();
        
        for (int i = 0; i < n - 1; i++) {
            if (v[i] == v[i + 1]) {
                v[i] *= 2;
                v[i + 1] = 0;
            }
        }

        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] != 0) {
                swap(v[idx], v[i]);
                idx++;
            }
        }
        
        return v;
    }
};