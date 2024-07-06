class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        long long sum=0;
        for(auto x:chalk){
            sum+=x;
        }
        int r=(k%sum);
        int i=0;
        while(r>=chalk[i]){
            r-=chalk[i];
            i++;
        }
        return i;
    }
};
