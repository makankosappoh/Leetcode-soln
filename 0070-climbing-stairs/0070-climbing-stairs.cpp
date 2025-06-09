class Solution {
public:
//fibonacci approach
//You are standing at the bottom of a staircase with n steps.
//Every time you take a step:If you're at step n, you could have come from: 
//step n - 1 (taking 1 step)
//step n - 2 (taking 2 steps) you can climb either 1 step or 2 steps.
    int climbStairs(int n) {
        int tsb = 0; // Represents ways to reach (i - 2)th step
        int osb = 1; // Represents ways to reach (i - 1)th step
        int current = 0; // total Ways to reach current step
        for(int i = 0; i < n; i++){
            current = tsb + osb; //total current will be sum of other two
            tsb = osb; //update a to b after new current
            osb = current; //update b to new current value
        }
        return osb;// after loop b becomes new current last computed values
    }
};