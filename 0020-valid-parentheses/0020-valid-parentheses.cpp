class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;

        for (char c : s) {
                

            if (c == '(' || c == '[' || c == '{')
               { ans.push(c);
               continue;}

            else {
               if(ans.empty()) {return false;}
                if ((c == ')' && ans.top() == '(') ||
                    (c == ']' && ans.top() == '[') ||
                    (c == '}' && ans.top() == '{'))
                    {ans.pop();
                    continue;}
                
                else return false;

            }
        }
        if(!ans.empty()) {return false;}
        else {return true;}
    }
};