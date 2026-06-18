class Solution {
public:
    double angleClock(int hour, int minutes) {
        float h=(hour%12)*30 + minutes*0.5;
        float m= minutes*6;
        float angle = fabs(h-m);
        return min(angle,360-angle);
        
    }
};