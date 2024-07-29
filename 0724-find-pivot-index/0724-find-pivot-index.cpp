class Solution {
public:
    int bruteForce(vector<int>& nums){   //sending nums by referrence from pivotIndex
        
        for(int i=0; i<nums.size(); i++){
            int lsum = 0, rsum = 0;

            //finding lsum excluding current index
            for(int j=0; j<i; j++)
            lsum += nums[j];

            //finding rsum excluding current index
            for(int j=i+1; j<nums.size(); j++)
            rsum += nums[j];

            if(lsum == rsum) return i;
        }
        return -1;
    }

    int prefixSumApproach(vector<int>&nums){    //sending nums by referrence
        vector<int>lsum(nums.size(), 0);  //creating lsum and inititalizing all values to 0
        vector<int>rsum(nums.size(), 0);

        //calculation of lsum array
        for(int i=1; i<nums.size(); ++i){
            lsum[i] = lsum[i-1] + nums[i-1];
        }

        //calculation of rsum array
        for(int i=nums.size()-2; i>=0; --i){
            rsum[i] = rsum[i+1] + nums[i+1];
        }

        //checking for "leftmost" pivot index
        for(int i=0; i<nums.size(); ++i){
            if(lsum[i] == rsum[i]) return i;
        }
        return -1;
    }

    int pivotIndex(vector<int>& nums) {
        return prefixSumApproach(nums);
    }

};