void Solution::rotate(vector<vector<int> > &A) {
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A[i].size();j++){
            swap(A[i][j],A[j][i]);
        }
    }
    int i=0;
    int j=A[0].size()-1;
    while(i<j){
        for(int k=0;k<A.size();k++)
            swap(A[k][i],A[k][j]);
    i++,j--;
    }  
    return;
}
