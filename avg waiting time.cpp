class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);
        int n=customers.size();
        double res=0.0;
        double x=customers[0][1]+customers[0][0];
        double avgi=customers[0][1];
            for(int i=1;i<n;i++){
                double start=customers[i][0];
                double time=customers[i][1];
                if(start<=x){
                    x+=customers[i][1];
                    double avg=x-customers[i][0];
                    avgi+=avg;
                }
                else{
                    double av=customers[i][1];
                    avgi+=av;
                    x=customers[i][1]+customers[i][0];
                }
            }
        res=avgi/n;
        return res;
    }
};
