class Solution {
public:
struct cmp {
        bool operator()(pair<int, int>& a, pair<int, int>& b) {
            if (a.first != b.first)
                return a.first < b.first;
            return a.second < b.second;
        }
    };
    int fun(vector<int>& nums){
        int cnt=0 ;
        for(int i=0 ;i<nums.size() ;i++){
            if(nums[i]==1) cnt++ ;
        }
        return cnt;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
         priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        for(int i=0 ;i<mat.size() ;i++){
            int cnt1=fun(mat[i]) ;
            pair<int,int> curr={cnt1 , i} ;
            if(pq.size()<k) pq.push(curr) ;
            else {
                pq.push(curr);
                pq.pop() ;
            }

        }
        vector<int> res;
        while(!pq.empty()){
           
            res.push_back(pq.top().second) ;
            pq.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};