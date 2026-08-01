class Solution {
public:
    long long fun(vector<int>& piles, int n, int speed) {
        long long h = 0;
        for (int i = 0; i < n; i++) {
            long long k=piles[i] / speed;
            h+=k ;
            if (piles[i] % speed != 0)
                h++;
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int guard) {
        int n = piles.size();
        int low = 1; // min ek banana toh kha hi legi
        int high = *max_element(piles.begin(), piles.end());
        int res = 0;
        while (low <= high) {
            int guess = (low + high) / 2;
            long long hours = fun(piles, n, guess);
            if (hours > guard)
                low = guess + 1;
            else {
                res = guess;
                high = guess - 1;
            }
        }
        return res;
    }
};