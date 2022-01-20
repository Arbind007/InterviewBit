int Solution::perfectPeak(vector<int> &A) {
    vector <int> right(A.size());
    vector <int> left(A.size());
    left[0] = A[0];
    int n = A.size();
    for(int i=1;i<n;i++){
        left[i] = max(A[i],left[i-1]);
    }
    right[n-1] = A[n-1];
    for(int i=n-2;i>=0;i--){
        right[i] = min(A[i],right[i+1]);
    }
    for(int i=1;i<n-1;i++){
        if(A[i] == left[i] && A[i] == right[i]){
            if(right[i+1]!=right[i]&&left[i+1]&&left[i]&&right[i]!=right[i-1]&&left[i]!=left[i-1])
                return 1;
        }
    }
    return 0;
}
