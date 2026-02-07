class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour == 12){
            hour = 0;
        }
        double ma = minutes*6.0;
        double ha = hour*30.0 + minutes*0.5;
        double diff = abs(ha - ma);
        double ans = min(diff , 360 - diff);
        return ans;
    }
};