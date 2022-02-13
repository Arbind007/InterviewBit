int Solution::titleToNumber(string s) {
    int n=s.size();
    int ans=0,j=0;
    for(int i=n-1;i>=0;i--){
        int x=s[i]-'A'+1;
        ans+=pow(26,j)*x;
        j++;
    }
    return ans;
}
