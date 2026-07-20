class Solution {
public:
    int characterReplacement(string s, int k) {
                int low =0 ;int high=0 ;
                int res=INT_MIN ;
                vector<int> v(256);
                
                for(high=0;high<s.size();high++){
                    v[s[high]]++;
                    int len=high-low+1;
                    int max_cnt=*max_element(v.begin(),v.end()) ;
                    int diff=len-max_cnt;
                    while(diff>k){
                        v[s[low]]-- ;
                        low++;
                        len=high-low+1;
                        max_cnt=*max_element(v.begin(),v.end()) ;
                        diff=len-max_cnt ;

                    }
                    len=high-low+1;
                    res=max(res,len) ;


                }
                return res;
    }
};