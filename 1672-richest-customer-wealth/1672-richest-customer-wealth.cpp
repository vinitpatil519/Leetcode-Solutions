class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = INT_MIN;
        for (int i = 0; i < (int)accounts.size(); i++) {
            int sum = 0;
            for (int j = 0; j < (int)accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            maxWealth = max(maxWealth, sum);
        }
        return maxWealth;
    }
};