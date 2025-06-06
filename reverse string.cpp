class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        //two pointers
        for(int i=0,j=n-1;i<j;i++,j--){
           char temp=s[i];
           s[i]=s[j];
           s[j]=temp;            
        }
    }
};
/*
// Iterate half
for (int i = 0; i < n / 2; i++) { 
    char temp = s[i];
    s[i] = s[n - i - 1];
    s[n - i - 1] = temp;
  }*/
