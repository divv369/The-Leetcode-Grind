class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        int opn=1e9 ;
        for(int r=0 ;r<n ;r++){
            int curr=r;
            string t=s;
            rotate(t.begin(),t.begin()+r,t.end());
            for(int i=0 ;i<n/2 ;i++){
                int diff=abs(t[i]-t[n-i-1]);
                curr+=min(diff,26-diff);

            }
            opn=min(opn,curr);

        }
        return opn;
    }
};