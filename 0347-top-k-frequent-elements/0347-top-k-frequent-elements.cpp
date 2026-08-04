class Solution {
public:
    struct cmp {
        bool operator()(pair<int, int>& a, pair<int, int>& b) {
            if (a.first != b.first)
                return a.first > b.first;

            return a.second > b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        unordered_map<int, int> f;
        // inserting the arraq into the hashmapp to get the frequency of every element this takes big oh of n time 
        for (int i = 0; i < nums.size(); i++) {
            f[nums[i]]++;
        }
        // iterating through the hashmap to push the element into the heap but here usinf the min heap so pushing only the k elements not the whole array which gives the complexity to be nlogk instead of nlogn which is in case of using max heap 
        for (auto i : f) {
            int element = i.first;
            int freq = i.second;
            pair<int, int> curr = {freq, element};
            if (pq.size() < k) {
                pq.push(curr);
                continue;
            } else {
                if (curr.first > pq.top().first) {
                    pq.pop();
                    pq.push(curr);
                } else
                    continue;
            }
        }
        /// now we are storing the result
        vector<int> res;
        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};