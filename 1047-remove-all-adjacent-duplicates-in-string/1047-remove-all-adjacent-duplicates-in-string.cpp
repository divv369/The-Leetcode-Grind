class Solution {
public:
    string removeDuplicates(string s) {
        string res="";
        stack <char> ans;
        ans.push(s[0]);
        for(int i=1 ; i<s.size();i++){
            if(!ans.empty()){
                if(s[i]!=ans.top()){
                    ans.push(s[i]);

                }
                else ans.pop();
            }
            else ans.push(s[i]);

        }
        while(!ans.empty()){
            res+=ans.top();
            ans.pop();
        }
        reverse(res.begin(),res.end());
        return res;

    }
};