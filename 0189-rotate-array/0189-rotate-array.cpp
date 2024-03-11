class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();  
		vector<int> ans(size);  // taking O(n) space

		for(int index = 0; index < size; index++){
			int newIndex = (index + k) % size;
			ans[newIndex] = nums[index];
		}
		nums = ans; // as we had to modify the original array
    }
};