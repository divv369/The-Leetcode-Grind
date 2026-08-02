class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(); //rows
        int n=matrix[0].size(); //column
        int rows=m-1;
        int col=0;
        while(rows>=0 && col<=n-1){
            if(matrix[rows][col]==target) return true ;
            if(matrix[rows][col]>target) rows--;
            else col++ ;

        }
        return false;

    }
};