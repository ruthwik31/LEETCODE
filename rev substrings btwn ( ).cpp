https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/
class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>ss;
        string res="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                ss.push(res);
                res=""; //becomes null
            }
            else if(s[i]==')'){
                reverse(res.begin(),res.end());
                res=ss.top()+res;
                ss.pop();
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};
