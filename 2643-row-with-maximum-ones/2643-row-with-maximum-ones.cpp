class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int n = mat.size();
        // n = no. of rows in the matrix
        int oneCount = INT_MIN;
        // oneCount --> will store max no. of ones in a row
        int rowNo = -1;
        // rowNo --> will store the index of the row at which max ones are found
        
        // accessing the matrix row-wise
        for(int i = 0; i < n; i++){
            int count = 0;   // temp counter
            for(int j = 0; j < mat[i].size(); j++){   //mat[i].size() will give the size of column at i'th row
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(count > oneCount){
                oneCount = count; // storing the maximum no of ones 
                rowNo = i; // storing the index of the row
            }
        }
        ans.push_back(rowNo);
        ans.push_back(oneCount);
        return ans;
    }
};