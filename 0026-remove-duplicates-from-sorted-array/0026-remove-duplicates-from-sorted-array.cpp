class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), relocate_head = 0, unique = 1, i = 1;
        while(i < n ){
            if(nums[i] == nums[i-1]){    // adj element is duplicate
                i++;
                continue;
            }
            // ----- unique element is found here -----
            nums[relocate_head + 1] = nums[i];
            i++;
            relocate_head++;
            unique++;
        }
        return unique;
    }
};