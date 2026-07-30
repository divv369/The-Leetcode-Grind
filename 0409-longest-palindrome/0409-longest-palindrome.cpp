class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        int sum = 0;
        bool odd = false;
        unordered_map<char, int> have;
        for (int i = 0; i < n; i++) {
            have[s[i]]++;
        }
        for (auto i : have) {
            int fhave = i.second;
            if (fhave % 2 == 0) {
                sum += fhave;
            } else
                odd = true;
        }

        if (odd == false) {
            return sum;
        } else {
            for (auto i : have) {

                int val = i.second;
                if (val % 2 == 1) {
                    sum += val - 1;
                }
            }
        }
        return sum + 1;
    }
};