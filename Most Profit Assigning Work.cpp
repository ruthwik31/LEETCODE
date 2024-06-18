class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=difficulty.size();
        int m=worker.size();
        vector<pair<int,int>>cost;
        for(int i=0;i<n;i++){
            cost.push_back({difficulty[i],profit[i]});
        }
        sort(cost.begin(),cost.end());
        //if two diff hv diff profits.
        for (int i=1; i<n; i++){
            cost[i].second = max(cost[i].second, cost[i-1].second);
            cout<<cost[i].second<<" ";
        }
        long res=0;
        for (int i=0; i<m; i++) {
            int x=0;
            int low=0, high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if (worker[i]>=cost[mid].first){
                    x=max(x,cost[mid].second);
                    low=mid+1;
                } else
                    high=mid-1;
            }
            res+=x;
        }
        return res;
    }
};
