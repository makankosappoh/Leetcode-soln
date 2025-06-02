class Solution {
public:
// first of all children should get atleast 1 candy so vector(n,1)
// what makes it hard is given Children with a higher rating get more candies than their neighbors.
// As given constraints: we have to check both "NeighbourS" i.e forward travers and backward traverse to get optimal solution
//Ensuring -> traverse high rating get more candy thn behind/left neighbour
//         <- traverse high rating get more candy than forawrd/right neighbour 
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> cd(n,1); //cd is candies and initial vector created as  {1,1,1...n}

        //-> traverse
        for(int i = 1; i < n;i++){
            if(ratings[i] > ratings[i - 1]){
                cd[i] = cd[i - 1] + 1;
            }
        }
        //<- traverse after new values of cd in forw traverse
        for(int i = n - 2; i >= 0; --i){
            if(ratings[i] > ratings[i + 1]){
                cd[i] = max(cd[i], cd[i + 1] + 1);
                //max bcz to get max candy out got already in forw traverse
            }
        }
        //sum up all values of cd vector and get final leat no. of candies required
        int total = 0;
        for (int C : cd) {
             total += C;
        }
        return total;
    }
};