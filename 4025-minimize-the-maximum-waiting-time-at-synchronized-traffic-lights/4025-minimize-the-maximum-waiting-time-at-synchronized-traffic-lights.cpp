class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxp = INT_MIN;
        int maxlight = *max_element(lights.begin(), lights.end());
        for(int i = 0; i<arrivalTime.size(); i++){
            int r = arrivalTime[i]%period;
            int waitingtime = 0;
            if(r<maxlight){
                waitingtime = 0;
            }else{
                waitingtime = period - r;
            }
            maxp = max(maxp, waitingtime);
        }
        return maxp;
    }
};