class Solution {
public:
//inputs
//given n gas stations eg: [1.2.3.4...n total] etc ad cost of ith station are gas[i]
//given cost of gas travel form prev to next station as cost[i] eg: [3,4,5...]
//outputs :
//to find starting gas station index as car reaches itself after clockwise move 
//else return -1
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;//start as empty for current gas station
        int totalgas = 0;//track net fuel after one circular track
        int currentgas = 0;//track fuel as we move further from start start point
        for(int i = 0; i < gas.size(); i++){
            int fuelgain = gas[i] - cost[i];//net gain/loss at ith station
            totalgas += fuelgain;//calculate overall fuel after gain/loss
            currentgas += fuelgain;//calculate running fuel form start
            //if currentfuel becomes -ve means can't reach next station form start
            if(currentgas < 0){
                currentgas = 0;//reset counter to 0
                start = i + 1;//move old start to next station as new start point
            }
        }
        return totalgas < 0 ? -1 : start;//if total gas < 0 means no complete loop hence return -1 otherwise we completed loop and return start
    }
};