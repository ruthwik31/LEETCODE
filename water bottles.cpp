class Solution {
public:

int numWaterBottles(int numBottles, int numExchange) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int count=0;
    int n=numBottles;
    int result=numBottles;
    int m=numExchange; 
    while(n>=m){
        int x=n/m;
        int y=n%m;
        result+=x;
        n=y+x;
        if(n<m){
            break;
        }
    }
    return result;
    }
};

/*
    
    while(n>=m){
        result=(n/m);
        count+=(n%m);
        int x=(n/m);
        n=(count+x);
    }
    return result+numBottles;
*/
