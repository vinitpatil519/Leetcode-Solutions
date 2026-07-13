class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0, right = n - 1;

        for(int i = 0; i < n - 2; i++) {

            // Skip duplicate first element
            if(i > 0 && nums[i] == nums[i-1])
                continue;

            left = i + 1;
            right = n - 1;

            int sum = -nums[i];   //left + right + nums[i] = 0 => left + right = -nums[i] --> tow sum problem with sum == -nums[i]

            while(left < right) {

                int s = nums[left] + nums[right];

                if(s == sum) {
                    //result store:
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    //to avoid duplicates:
                    while(left < right && nums[left] == nums[left-1])
                        left++;
                    while(left < right && nums[right] == nums[right+1])
                        right--;
                }
                else if(s < sum) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
        return ans;
    }
};