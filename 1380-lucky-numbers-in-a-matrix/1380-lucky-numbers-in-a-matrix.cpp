class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
         vector<int> lucky;
    int m = matrix.size();
    int n = matrix[0].size();
    
    vector<int> min_in_row(m, INT_MAX);
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            min_in_row[i] = min(min_in_row[i], matrix[i][j]);
        }
    }
    
    for (int i = 0; i < m; ++i) {
        int min_value = min_in_row[i];
        int col_index = -1;
        
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == min_value) {
                col_index = j;
                break;
            }
        }
        
        bool is_max_in_column = true;
        for (int k = 0; k < m; ++k) {
            if (k != i && matrix[k][col_index] > min_value) {
                is_max_in_column = false;
                break;
            }
        }
        
        if (is_max_in_column) {
            lucky.push_back(min_value);
        }
    }
    
    return lucky;
    }
};