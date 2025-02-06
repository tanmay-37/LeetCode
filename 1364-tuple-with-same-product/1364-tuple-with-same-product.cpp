class Solution {
public:
    int tupleSameProduct(vector<int>& v) {
        vector<int> prod;

        for(int i = 0;i< v.size() - 1;i++){
            for(int j = i+1;j<v.size();j++){
                prod.push_back(v[i]*v[j]);
            }
        }
        int cnt = 1, ans = 0;
        sort(prod.begin(),prod.end());
        for(int i = 1;i<prod.size();i++){
            if(prod[i] == prod[i-1]) cnt++;
            else{
                if(cnt > 1) ans += cnt * (cnt - 1) * 4;
                cnt = 1;
            }
        }
        return ans;
    }
};