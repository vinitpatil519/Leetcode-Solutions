class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2) return n;  //edge case
        int relocate_head = 2;
        for(int i = 2; i < n; i++) {
            // allow only 2 duplicates
            if(nums[i] != nums[relocate_head - 2]) {
                nums[relocate_head] = nums[i];
                relocate_head++;
            }
        }

        return relocate_head;
    }
};