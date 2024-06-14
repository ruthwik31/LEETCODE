class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int x=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                x+=(nums[i-1]-nums[i]+1);
                nums[i]=nums[i-1]+1;
            }
        }
        return x;
    }
};
