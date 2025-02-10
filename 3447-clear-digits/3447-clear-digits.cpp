#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        stack<string> v;
        for (char c : s) {
            if (c >= 'a' && c <= 'z') 
                v.push(string(1, c));
            else if (!v.empty()) 
                v.pop();
        }

        string ans = "";
        while (!v.empty()) {
            ans += v.top();
            v.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
