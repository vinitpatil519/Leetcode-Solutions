class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();  // no. of rows

        // transpose
        for(int i = 0; i < n; i++){   // accessing row-wise
            for(int j = i; j < matrix[i].size(); j++){   // *catch --> j = i
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // reverse
        for(int i = 0; i < n; i++){
            // reverse every row in the matrix
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};