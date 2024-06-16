class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int m=nums.size();
        long long int sum=1;
        int patch=0;
        int i=0;
        while(sum<=n){
                if(i<m && nums[i]<=sum){
                    sum+=nums[i];
                    i++;
                }
                else{
                    sum+=sum;
                    patch++;
                    cout<<sum<<" ";
                }
            }
        return patch;
    }
};
