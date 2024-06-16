class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length();
        vector<int>num;
        for(char ch:s){
            num.push_back(int(ch));
        }
        int res=0;
        for(int i=1;i<n;i++){
            res+=abs(num[i]-num[i-1]);
        }
        return res;
    }
};
/*int sum=0;
        for(int i=1;i<s.size();i++){
            sum+=abs(int(s[i])-int(s[i-1]));
        }
        return sum;*/
