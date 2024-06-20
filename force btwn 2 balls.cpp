class Solution {
public:
    int  noofballs();
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int result=0;
        if(m==2){
            result=position[n-1]-position[0];
        }
        int low=1;
        int high=(position[n-1]/(m-1))+1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if((noofballs(position,m,mid))>=m){
                result=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return result;
    }
    int noofballs(vector<int>& p, int m,int k){
        int nobp=1;
        int lastb=p[0];
        for(int i=1;i<p.size() && nobp<m;i++){
            int x=p[i];
            if(x-lastb>=k){
                nobp++;
                lastb=x;
            }
        }
        return nobp;
    }
};
