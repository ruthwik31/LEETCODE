class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>dgre(n);
        int nn=roads.size();
        for(int i=0;i<nn;i++){
            dgre[roads[i][0]]++;
            dgre[roads[i][1]]++;
        }
        sort(dgre.begin(),dgre.end());//12234
        long long res=0;
        for(int i=1;i<=n;i++){
            res+=1ll*i*dgre[i-1];//rumtime error
        }
        return res;
    }
};
