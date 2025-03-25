class Solution {
public:
    string triangleType(vector<int>& v) {
        if (v[0] + v[1] > v[2] && v[1] + v[2] > v[0] && v[0] + v[2] > v[1]) {
            sort(v.begin(),v.end());
            if(v[0]!=v[1] && v[1]!=v[2]) return "scalene";
            else if(v[0] == v[1] && v[0] != v[2] || v[0] != v[1] && v[1] == v[2] || v[0] == v[2] && v[1] != v[2]) return "isosceles";
            else return "equilateral";
        }
        else{
            return "none";
        }
        
        return "none";
    }
};