class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        int idx=max_element(nums.begin() ,nums.end())-nums.begin();
        nums.erase(nums.begin()+idx);
        int maxi2=*max_element(nums.begin(),nums.end());
        int ans=(maxi-1)*(maxi2-1);
        return ans;
    }
};