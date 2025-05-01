class Solution {
public:
    void sortColors(vector<int>& arr) {
        int k = 0;
        for(int i = 0;i<arr.size();i++){
            if(arr[i] == 0){
                swap(arr[i], arr[k]);
                k++;
            } 
        }
        for(int i = k;i<arr.size();i++){
            if(arr[i] == 1){
                swap(arr[i], arr[k]);
                k++;
            } 
        }
        for(int i = k;i<arr.size();i++){
            if(arr[i] == 2){
                swap(arr[i], arr[k]);
                k++;
            } 
        }
    }
};