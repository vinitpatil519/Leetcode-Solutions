class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(), zero = 0, one = 0, two = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == 0) zero++;
            else if(nums[i] == 1) one++;
            else if(nums[i] == 2) two++;
            else continue;
        }
        nums.erase(nums.begin(), nums.end());
        for(int i = 0; i < zero; i++){
            nums.push_back(0);
        }
        for(int i = 0; i < one; i++){
            nums.push_back(1);
        }
        for(int i = 0; i < two; i++){
            nums.push_back(2);
        }
    }
};