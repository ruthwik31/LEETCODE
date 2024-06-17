//Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.
#include<cmath>
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0;
        long long j=static_cast<long long>(sqrt(c));
        cout<<j<<endl;
        while(i<=j){
            if(((i*i)+(j*j))==c)
            return true;
            else if( ((i*i)+(j*j))>c)
            j--;
            else
            i++;
        }
        return false;
    }
};
