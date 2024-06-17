class Solution {
public:
    bool isPerfectSquare(int num) {
        bool flag=false;
        long long j=static_cast<long long>(sqrt(num));
        long long i=j*j;
        cout<<i;
        if(i==num){
            flag=true;
        }
        return flag;
    }
};
