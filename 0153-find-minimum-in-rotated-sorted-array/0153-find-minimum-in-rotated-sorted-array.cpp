class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0 ;int high=n-1;
        int res;
        while(low<=high){
            int guess=(low+high)/2;
            if(nums[guess]>nums[n-1]){
                //part2 of the array mai hai .
                //right side jayege ham there only we will get part 1 1st elemetn
                low=guess+1;
            
            }
            else{
                //part1 mai hai ham store the guessand go to left for more smaller element if exist 
                res=guess ;
                high=guess-1;
            }
        }
        return nums[res];
    }
};