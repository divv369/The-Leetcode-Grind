class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack <int> st;
        vector<int> res(n);
        
        res[n-1]= -1;
        st.push(nums[n-1]);
        for(int i=2*n-2 ;i>=0 ;i--){
            int idx=i%n ;
            while(!st.empty() && st.top()<=nums[idx]){
                st.pop();
            }
            if(st.empty()) res[idx]=-1 ;

            else res[idx]=st.top();
            st.push(nums[idx]);
        }
        return res;
    }
};