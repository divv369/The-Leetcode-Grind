class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxend=nums[0];
        int minend=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int c1=nums[i];
            int c2=nums[i]*maxend ;
            int c3=nums[i]*minend ;
            maxend=max(c1 , max(c2,c3)) ;
            minend=min(c1,min(c2,c3)) ;
            ans=max(ans ,max(minend,maxend));
        }
        return ans;
    }
};