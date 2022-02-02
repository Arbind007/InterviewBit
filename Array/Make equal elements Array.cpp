int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int diff = 0 ;
    set <int> s; 
    for(int i=0;i<A.size();i++){
        s.insert(A[i]);
    }
    vector <int> ans;
    for (auto& i : s)
    {
        ans.push_back(i);
    }
    diff = ans[1] - ans[0];
    if(diff % B != 0)
        return 0;
    return 1;
}
