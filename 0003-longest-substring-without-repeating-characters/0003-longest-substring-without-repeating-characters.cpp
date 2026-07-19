class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0 ,high=0 ;
        int res=0 ;
        unordered_map <int,int> f;
        for(high=0 ;high<s.size();high++){
            f[s[high]]++;
            int k=high-low+1 ;
            //main logic was that hashmap size can be less or equal to the string size , it cant be greator and also recalculating k after chaning low.
            while(f.size()<k){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);

                }
                low++;
                k=high-low+1;
            }
            int len =high-low+1;
            res=max(res,len);
        }
        return res;
    }
};