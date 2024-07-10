https://leetcode.com/problems/crawler-log-folder/?envType=daily-question&envId=2024-07-10
class Solution {
public:
    int minOperations(vector<string>& logs) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
       int n=logs.size();
        int m=0;
        for(int i=0;i<n;i++){
            if(logs[i]=="../"){
                if(m>0){
                    m--;
                }
            }
            else if(logs[i]=="./")continue;
            else m++;
        }
        return m;
    }
};

// using stack
/*
        stack<string>s;
        for(auto i:logs){
            if(i=="../"){
                if(!s.empty()){
                    s.pop();
                }
            }
            else if(i=="./") continue;
            else
            s.push(i);
        }
        return s.size();*/
