class Solution {
public:
// Logic:
// To minimize the total cost using the "Buy Two, Get One Free" offer:
// Buy the most expensive items first.
// The third item in each group is free (cheapest of the three).
// Sort the array and iterate from the end (expensive items first).
// Skip every third item using (cost.size() - 1 - i) % 3 == 2
// If it's not the free candy, add its cost to the total.
    int minimumCost(vector<int>& cost) {
        int total = 0;
        sort(cost.begin(), cost.end()); 
        for(int i = cost.size() - 1; i >= 0; --i) { 
            if((cost.size() - 1 - i) % 3 != 2) {
                total += cost[i];
            }
        }
        return total;
    }
};
