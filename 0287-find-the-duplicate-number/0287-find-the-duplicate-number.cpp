class Solution {
public:
//best approach out of all 7 approaches
//hare and tortoise method 
/* 
1) Treat the array as a linked list, where each element points to the next index (nums[i] is like a pointer).
2) The duplicate number creates a cycle in this linked list.
3) Use two pointers:
 - Slow pointer moves one step at a time.
 - Fast pointer moves two steps at a time.
4) The two pointers will eventually meet inside the cycle.Once they meet, reset one pointer to the start of the array.
5) Move both pointers one step at a time until they meet again.The meeting point is the duplicate number.
*/
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        // The duplicate creates a cycle in this linked list.
        do{
            slow = nums[slow]; //move slow by 1 step
            fast = nums[nums[fast]]; // move fast by 2 steps
        } while(slow != fast); // They meet inside the cycle.
        // Reset one pointer to the start.
        fast = nums[0];
        // Move both pointers equally one step at a time until they meet again.
        // This meeting point is the duplicate number.
        while(slow != fast){
            slow = nums[slow]; // move by 1 step
            fast = nums[fast]; // move by 1 step
        }
        return fast; //return dup no. (entry point of cycle)
    }
};
/*
Example: nums = [1, 3, 4, 2, 2]....indexes mums{0, 1, 2, 3, 4}
Start: slow = 1, fast = 1, nums[0]
Move: slow = nums[1] = 3, fast = nums[nums[1]] = nums[3] = 2
Move: slow = nums[3] = '2', fast = nums[nums[2]] = nums[4] = 2 → they meet

Reset fast to start: fast = nums[0] = 1 whle slow remaisn same as '2' from above
Move: slow = nums[2] = 4, fast = nums[1] = 3
Move: slow = nums[4] = 2, fast = nums[3] = 2 → they meet again at 2

Duplicate = 2
*/
