/*
Searcha2D Matrix
by N.H.J.
2021.3.30
ver.1
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==target)
                    return true;

            }
        }
        return false;
    }
};
