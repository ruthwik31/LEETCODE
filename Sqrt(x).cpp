//Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
class Solution {
public:
    int mySqrt(int x) {
        long long i,k;
        for(i=0;i<=x;i++){
            if(i*i<=x)
            k=i;
            if(i*i>x)
            break;
        }
        return k;
    }
};
