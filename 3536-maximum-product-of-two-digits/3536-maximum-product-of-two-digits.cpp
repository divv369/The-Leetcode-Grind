class Solution {
public:
    int maxProduct(int n) {
         vector<int> res;
        while(n>0){
        int d=n%10;
        n=n/10;
        res.push_back(d);
        }
        int maxi=*max_element(res.begin(),res.end());
        auto it= find(res.begin(),res.end(),maxi);
        res.erase(it);
        int maxi1=*max_element(res.begin(),res.end());
        return maxi*maxi1;

    }
};