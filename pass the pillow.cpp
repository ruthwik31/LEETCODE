class Solution {
public:
    int passThePillow(int n, int time) {
        int t=(time%(n-1));
        int r=time/(n-1);
        cout<<"t="<<t<<" r="<<r;
        if(r%2==0){
            return t+1;
        }
        else{
            return n-t;
        }
    }
};
