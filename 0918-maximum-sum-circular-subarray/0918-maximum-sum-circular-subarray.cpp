class Solution {
public:
int totalsum(vector<int>& nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    return sum;
}
int maxsum(vector<int>& nums){
    int best=nums[0];
    int ans=nums[0];
    for(int i=1;i<nums.size();i++){
        int c1=nums[i];
        int c2=best+nums[i];
        best=max(c1,c2);
        ans=max(ans,max(c1,c2)) ;
    }
    return ans;
}
int minsum(vector<int>& nums){
    int best=nums[0];
    int ans=nums[0];
    for(int i=1;i<nums.size();i++){
        int c1=nums[i];
        int c2=best+nums[i];
        best=min(c1,c2);
        ans=min(ans,min(c1,c2)) ;
    }
    return ans;
}
    int maxSubarraySumCircular(vector<int>& nums) {
        int res=totalsum(nums) - minsum(nums);
        if(maxsum(nums)<0) return maxsum(nums) ;
        else return max(res,maxsum(nums));
    }
};