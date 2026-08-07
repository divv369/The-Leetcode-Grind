class Solution {
public:
    void fun(string& s, int n, int idx, string& dairy, vector<string>& res,
             unordered_map<char, string>& f) {

        if (idx == n) {
            res.push_back(dairy);
            return;
        }
        string s1 = f[s[idx]];
        for (int i = 0; i < s1.size(); i++) {
            dairy.push_back(s1[i]);
            fun(s, n, idx + 1, dairy, res, f);
            dairy.pop_back();
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> f;
        f['2'] = "abc";
        f['3'] = "def";
        f['4'] = "ghi";
        f['5'] = "jkl";
        f['6'] = "mno";
        f['7'] = "pqrs";
        f['8'] = "tuv";
        f['9'] = "wxyz";
        int n = digits.size();
        string dairy;
        vector<string> res;
        fun(digits, n, 0, dairy, res, f);
        return res;
    }
};