int Solution::solve(vector<int> &A, int B) {
    int ans=0;
    unordered_map <int,int> ump;
    for(int i=0;i<A.size();i++){
        if(ump[B ^ A[i]])
            ans++;
        ump[A[i]] = 1;
    }
    return ans;
}
