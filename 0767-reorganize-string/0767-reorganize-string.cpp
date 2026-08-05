class Solution {
public:
    struct cmp {
        bool operator()(pair<int, char>& a, pair<int, char>& b) {
            if (a.first != b.first)
                return a.first < b.first;

            return a.second < b.second;
        }
    };
    string reorganizeString(string s) {
        string res = "";
        priority_queue<pair<int, char>, vector<pair<int, char>>, cmp> pq;
        unordered_map<char, int> f;
        for (char c : s) {
            f[c]++;
        }
        for (auto i : f) {
            int freq = i.second;
            char c = i.first;
            pair<int, char> p = {freq, c};
            pq.push(p);
        }
        int seat = 0;
        while (!pq.empty()) {
            pair<int, char> p1 = pq.top();
            pq.pop();
            if (seat == 0 || res[seat - 1] != p1.second) {
                res.push_back(p1.second);
                p1.first--;
                seat++;
                if (p1.first > 0) {
                    pq.push(p1);
                }
            } else {
                if (pq.empty())
                    return "";
                pair<int, char> p2 = pq.top();
                pq.pop();
                
                res.push_back(p2.second);
                p2.first--;
                seat++;
                if (p2.first > 0)
                    pq.push(p2);

                pq.push(p1);
            }
        }
        return res;
    }
};