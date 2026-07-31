class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int ans ;
        if(n==1) {ans=0 ; return ans;}
        if(nums[n-1]>nums[n-2]) return n-1 ;
        if(nums[0]>nums[1]) return 0 ;
        int low=0 ; int high =n-1 ;
        while(low<=high){
            int mid =(low+high)/2 ;
            if(nums[mid]> nums[mid+1] && nums[mid]>nums[mid-1]) {
                return mid ;
            }
            if(nums[mid]< nums[mid+1]) {
                low=mid+1 ;
            }
            else high =mid-1;
        }
         return -1 ;
    }
};