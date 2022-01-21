int Solution::solve(vector<string> &A) {
    int n = A.size();
    sort(A.begin(), A.end());
    int l = 0, r = n-1;
    while(r-l>=2){
        int mid = (l+r)/2;
        double s = stof(A[l]) + stof(A[r]) + stof(A[mid]);
        if(s>=2)
            r = r--;
        else if(s<1)
            l = l++;
        else return 1;
    }
    return 0;
}
