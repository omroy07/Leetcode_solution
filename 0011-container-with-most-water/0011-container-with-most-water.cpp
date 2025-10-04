class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0,  rp = height.size()-1;
        int w = 0,ht = 0, currWater;
        int maxWater  = 0;
        while(lp < rp ){
            w = rp - lp;
            ht = min(height[lp],height[rp]);
            currWater = w*ht;
            maxWater = max(maxWater,currWater);
            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }
        return maxWater;
    }
};