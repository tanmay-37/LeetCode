class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int areaA = (ax2 - ax1) * (ay2 - ay1);
        int areaB = (bx2 - bx1) * (by2 - by1);

        int overlap = 0;

        int horizontal = min(ax2, bx2) - max(ax1, bx1);
        int vertical = min(ay2, by2) - max(ay1, by1);

        if(horizontal > 0 && vertical > 0){
            overlap = horizontal * vertical;
        }

        return areaA + areaB - overlap;
    }
};