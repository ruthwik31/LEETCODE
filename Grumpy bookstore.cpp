class Solution {
public:
    int maxSatisfied(vector<int>& cus, vector<int>& gr, int min) {
        int n=cus.size();
        int result=0;
        int cuss=0;
        for(int i=0;i<n;i++){
            cuss+=cus[i]*(1-gr[i]);
        }
        for(int i=0;i<n-min+1;i++){
            int mod=0;
            for(int j=i;j<min+i;j++){
                if(gr[j]==1){
                    gr[j]=0;
                    mod+=(cus[j]*(1-gr[j]));
                    gr[j]=1;
                }
            }
            int x=cuss+mod;
            result=max(result,x);
        }
        return result;
    }
};
//approach 2>>>>1
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int min) {
        int n=customers.size();
        int sat=0;
        int cuus=0;
        for(int i=0;i<n;i++){
            cuus+=(customers[i]*(1-grumpy[i]));
        }
        for(int i=0;i<n;i++){
            if(grumpy[i]==1){
                cuus+=customers[i];
            }
            if(i>=min && grumpy[i-min]==1){
                cuus-=customers[i-min];
            }
            sat=max(sat,cuus);
        }
        return sat;
    }
};
///////////////////approach 3
class Solution {
public:
    int maxSatisfied(const vector<int>& customers, const vector<int>& grumpy, const int minutes) {
        const auto len = customers.size();
        int satisfied = 0, g = 0, gain = 0;
        for (int i = 0; i < len; i++) {
            g += customers[i] * grumpy[i];
            satisfied += customers[i] * (1 - grumpy[i]);
            if (i >= minutes)
                g -= customers[i - minutes] *  grumpy[i - minutes];
            gain = max(gain, g);
        }
        return satisfied + gain;
    }
};
