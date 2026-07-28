class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        string t;
        if (n % 2 == 0) {
            for (int i = 0; i < n / 2; i++) {
                t += s[i];
            }
            sort(t.begin(), t.end());
            string x = t;
            reverse(x.begin(), x.end());
            t += x;
            return t;
        }
        else {
            for (int i = 0; i < n / 2; i++) {
                t += s[i];
            }
            char mid=s[n/2];
            sort(t.begin(), t.end());
            string x = t;
            reverse(x.begin(), x.end());
            t += mid + x;
            return t;
        }
    }
};