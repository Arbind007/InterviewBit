vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(),A.end(),[](Interval &a,Interval &b){
        if(a.start == b.start)
            return a.end < b.end;
        return a.start < b.start; 
    });
    vector <Interval> ans;
    ans.push_back(A[0]);
    for(int i=1;i<A.size();i++){
        if(ans[ans.size() - 1].end > A[i].start){
            ans[ans.size() - 1].end = max(ans[ans.size() - 1].end,A[i].end);
        }
        else{
            ans.push_back(A[i]);
        }
    }
    return ans;
}
