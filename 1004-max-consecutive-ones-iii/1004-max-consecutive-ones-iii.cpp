class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0, high = 0, re = INT_MIN;
        int num1 = 0, num0 = 0; 
        for (high = 0; high < nums.size(); high++) {
            if (nums[high] == 0)
                num0++;
            else
                num1++;

            int len = high - low + 1;
            int maxi;
            
            while (num0 > k) {
                if (nums[low] == 0)
                    num0--;
                else
                    num1--;

                low++;
                
            }
            len = high - low + 1;

            re = max(len, re);
        }
        return re;
    }
};