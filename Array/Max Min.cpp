int Solution::solve(vector<int> &A) {
int minno=INT_MAX,maxno=INT_MIN;
for(int i=0;i<A.size();i++){
    minno = min(minno,A[i]);
    maxno = max(maxno,A[i]);
}
return maxno+minno;
}
