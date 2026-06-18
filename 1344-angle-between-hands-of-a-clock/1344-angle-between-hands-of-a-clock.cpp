class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ghanta = (hour%12)*30 + minutes*0.5;
        double minu = minutes*6;
        double diff  = abs(ghanta-minu);
        return min(diff,360-diff);
        
    }
};