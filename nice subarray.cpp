
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k){
        int n=nums.size();
        int count = 0;
        int oddCount=0,j=0,result=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==1){
                oddCount++;
                count=0;
            }
            while(oddCount==k){
                count++;
                if(nums[j]%2==1){
                    oddCount--;
                }
                j++;
            }
            result+=count;
        }
        return result;
    }
};
/*
        for(int i=0;i<n;i++){
            if((nums[i]%2)==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
        vector<pair<int,int>>subarray;
        for(int i=0;i<n;i++){
            int x=0;
            for(int j=i;j<n;j++){
                if(nums[j]==1){
                    x=x+1;
                    if(x>3){
                        break;
                    }
                }
                if(x==k){
                    subarray.push_back({i,j});
                }
            }
        }
        int result=subarray.size();
        return result;
        */
