class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        // solution number 1
        // int low=0 ;int high=m-1;
        // int res;
        // while(low<=high){
        //     int guess=(low+high)/2;
        //     if(matrix[guess][0]==target) return true;
        //     if(matrix[guess][0]<target){
        //         res=guess;
        //         low=guess+1;
        //     }
        //     else high=guess-1;
        // }

        // low=0 ; high=n-1;
        // while(low<=high){
        //     int guess=(low+high)/2 ;
        //     if(matrix[res][guess]==target) return true;
        //     if(matrix[res][guess]>target) high=guess-1;
        //     else low=guess+1;
        // }
        // return false;
        //solution 2 usaing single binary search only
        int low=0 ;int high=n*m-1;
        while(low<=high){
            int guess=(low+high)/2;
            int rows=guess/n ;
            int col=guess%n ;
            if(matrix[rows][col]==target) return true;
            if(matrix[rows][col]>target) high=guess-1;
            else low=guess+1 ;
        }
        return false;
        

    }
};