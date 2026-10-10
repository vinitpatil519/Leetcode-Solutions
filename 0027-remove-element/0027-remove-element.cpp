class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std::erase(nums,val);
        int k = nums.size();
        return k;
    }
};