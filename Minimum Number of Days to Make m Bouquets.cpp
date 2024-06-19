class Solution {
public:
    bool canmakebouq(vector<int>& bloomday, int m, int k,int mid){
        int x=0;
        int nob=0;
        for(int i=0;i<bloomday.size();i++){
            //int x=0;
            if(bloomday[i]<=mid){
                x++;
            }
            else {
            nob+=x/k;
            x=0;
            }
        }
        nob+=x/k;
        if(nob>=m) 
        return true;
        else 
        return false;
}
    int minDays(vector<int>& bloomday, int m, int k) {
        long n=bloomday.size();
        long long cal =m*1ll*k;
        //long long cal=static_cast<long long>(m*k);
        if(cal>n){
            return -1;
        }
        int y=INT_MIN;
        int z=INT_MAX;
        for(int i=0;i<n;i++){
            y=max(y,bloomday[i]);
            z=min(z,bloomday[i]);
        }
        int low=z;
        int high=y;
        while(low<=high){
            int mid=(low+high)/2;
            if(canmakebouq(bloomday,m,k,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    return low;
    }
};
