class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
       int n=profits.size();
       vector<pair<int,int>>newone;
        for(int i=0;i<n;i++){
            newone.push_back(make_pair(capital[i],profits[i]));
        }
        sort(newone.begin(),newone.end());
        priority_queue<int>tr;
        int x=0;
        for(int i=0;i<k;i++){
            while(x<newone.size() && newone[x].first<=w){
                tr.push(newone[x].second);
                x++;
            }
            if(tr.empty())
            break;
            w+=tr.top();
            tr.pop();
        }
    return w;
    }
};
