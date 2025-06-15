class Solution {
public:
// brute force
//ITS SAFE AND EASY BUT SOMETIMES NOT GOOD FOR PARALLEL LINE IF ANY TESTCASE FOUND
// GIVEN: points[i] = [xi, yi] represents a point on the X-Y plane
//we can use slope method if two cordinate have smae slope then they are in straight line 
//so just count thema and take max od different slopes and return max count
//slope m = y2 - y1/ x2 - x1 for (x1,y1) and (x2,y2)
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if (n <= 2) return n; // If there are <= 2 points, all are trivially collinear.
        int maxCollinearPoints = 2; // Start with 2 bcz any two points always form a line.
        for(int i = 0; i < n; i++){ // select first coordinate
            for(int j = i + 1; j < n; j++){ // select next to i coordinate
               int count = 2;// Start with the two base points i and j
// Check all other points k to see if it lie on the same line formed by points i and j
               for(int k = 0; k < n; k++){ 
               if(k != i && k != j){
/*
 Suppose we have three points:
 Point A → (x1, y1) → in code: points[i][0], points[i][1]
 Point B → (x2, y2) → in code: points[j][0], points[j][1]
 oint C → (x3, y3) → in code: points[k][0], points[k][1]
 collinearity condition:
 (y2 - y1) * (x1 - x3) == (y1 - y3) * (x2 - x1)
*/
//if this hold true, k lies on the line formed by points i and j, so we increment count
                if ((points[j][1] - points[i][1]) * (points[i][0] - points[k][0]) ==
                (points[i][1] - points[k][1]) * (points[j][0] - points[i][0])) count++;
                  }
               }
            maxCollinearPoints = max(maxCollinearPoints , count);
            }
        }
    return maxCollinearPoints;
    }
};