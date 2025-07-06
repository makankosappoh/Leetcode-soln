//given two arrray num1 small arraya nd num2 bigger array and we need to handle two types of possibility
//1) add a value to index in num2 ie nums2[index] += val
//2) count piars(i,j) such tha num1 + num2 = givn value 0<=i<num1.size and 0<=j<num2.size
class FindSumPairs {
public:
//approach: num1 small so loop easy but not good for num2 looping TC/SC
//store num1 and num2 as member variable using vector an create freq of both arrays to count  
vector<int> a;
vector<int> b;
unordered_map<int, int> freq1; 
unordered_map<int, int> freq2; 
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        a = nums1;
        b = nums2;
        for(int num : a) freq1[num]++;
        for(int num : b) freq2[num]++;
    }
    //1)condition
    void add(int index, int val) {
        //get old values at this index for nums2
        int oldval = b[index];
        //decrease freq of old values
        freq2[oldval]--;
        if(freq2[oldval] == 0) freq2.erase(oldval); //remove extra SC if frq become 0
        //update numd2 with new values
        b[index] += val;
        freq2[b[index]]++;
    }
    //2) condition
    int count(int tot) {
        int ans = 0;
        //for each elemtn in nums1; find its complement in nums2
        for(int num : a){
            int complement = tot - num;//this is all we need from nums2
            if(freq2.find(complement) != freq2.end()){
                ans += freq2[complement];//if it exist in nums2, add freq2 to count
            }
        }
        return ans;
    }
};
/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */