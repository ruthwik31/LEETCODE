class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        int n=coins.size();
        sort(coins.begin(),coins.end());
        for(int i=0;i<n;i++){
            cout<<coins[i]<<" ";
        }
        cout<<endl;
        int sum=1;
        //consecutive range must start vth 0;
        for(int i = 0; i<n && sum >= coins[i]; i++) {
            sum += coins[i];
            cout<<sum<<" ";
        }
        return sum;
    }
};
