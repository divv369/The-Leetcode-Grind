class Solution {
public:
    int maxsum(vector<int>& nums) {
        int best = nums[0];
        int ans = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int c1 = best + nums[i];
            int c2 = nums[i];
            best=max(c1, c2);
            ans = max(ans, best);
        }
        return ans;
    }

    int minsum(vector<int>& nums) {
        int best = nums[0];
        int ans = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int c1 = best + nums[i];
            int c2 = nums[i];
            best=min(c1, c2);
            ans = min(ans, best);
        }
        return ans;
    }
    int maxAbsoluteSum(vector<int>& nums) {
        int ans = max(abs(maxsum(nums)), abs(minsum(nums)));
        return ans;
    }
};