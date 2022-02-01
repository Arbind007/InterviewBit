vector<int> Solution::solve(vector<int> &A) {
    int a=0,b=0;
    for(int i=0;i<A.size();i++){
        if(A[i])
           a++;
        else 
           b++;
    }
    vector <int> ans;
    for(int i=0;i<b;i++){
        ans.push_back(0);
    }
    for(int i=0;i<a;i++){
        ans.push_back(1);
    }
    return ans;
}
