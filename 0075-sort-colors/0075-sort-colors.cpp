// two pointer approach/ dutch national flag approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0, index = 0, right = nums.size()-1;
        //variable index is for traversing through the array
        //variables left and right are the two pointers starting from 1st and the last element resp.
        while(index <= right){
            if(nums[mid] == 0){
                swap(nums[low], nums[index]);
                left++;
                index++;
            }
            else if(nums[index] == 1){
                index++;
            }
            else{
                swap(nums[index], nums[right]);
                right--;
            }
        }
    }
};