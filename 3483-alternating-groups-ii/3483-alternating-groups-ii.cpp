class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int count = 0;
        int length = 1;
        int curr = colors[0];

        for(int i=1;i<colors.size();i++){
            if(colors[i]==curr){
                curr=colors[i];
                length = 1;
                continue;
            }
            length++;
            curr=colors[i];
            if(length>=k) count++;
        }

        for(int i=0;i<k-1;i++){
            if(colors[i]==curr){
                break;
            }
            length++;
            curr=colors[i];
            if(length>=k) count++;
        }
        
        return count;
        
    }
};
