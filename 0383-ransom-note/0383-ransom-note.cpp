class Solution {
public:
bool fun(unordered_map<char,int> need, unordered_map<char,int> have){
    for(auto i: need){
        char c= i.first;
        int fneed=i.second;
        int fhave=have[c];
        if(fhave<fneed){
            return false;
        }
    }
    return true;
}
    bool canConstruct(string r, string m) {
        unordered_map<char,int> need;
        for(int i=0 ;i<r.size() ;i++){
            need[r[i]]++;
        }
        unordered_map<char,int> have;
        for(int i=0 ;i<m.size() ;i++){
            have[m[i]]++ ;
        }
         return fun(need,have);
    }
};