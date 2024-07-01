class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        if(n<3)
        return false;
        else{
        int k=0;
        for(int i=0;i<n;i++){
            int x=arr[i]%2;
            if(x==1){
                k+=1;
                if(k==3){
                  return true;  
                }
            }
            else{
                k=0;
            }
        }
        }
        return false;
    }
};
