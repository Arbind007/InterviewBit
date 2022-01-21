vector<int> Solution::getRow(int A) {
    vector<int> v(A+1);
    if(A==0){
        v[0]=1;
        return v;
    }
    int c=1;
    v[0]=1;
    for(int i=1;i<=A;i++){
        v[i]=c*(A-i+1)/i;
        c=v[i];
    }
    return v;
}
