class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int index = 0; index<n; index++){
            sum += nums[index];     // to calculate the sum of the elements of the input array 
        }
        // sum of an A.P. with 1 as first term, n as last term, and n number of terms
        // sum = ((total terms) * (first - last))  / 2
        // total sum is ncluding the missing number.
        int totalSum = (n*(1+n))/2;
        int missing = totalSum - sum;
        return missing;  //missing number
    }
};