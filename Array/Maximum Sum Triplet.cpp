int Solution::solve(vector<int> &A)
{
    int n=A.size(),last=A[n-1],ans=0;
    vector<int>right(n);
    set<int>s;
    s.insert(A[0]);
    for(int i=n-1;i>=0;i--)
    {
        right[i]=last;
        last=max(A[i],last);
    }
    for(int i=1;i<n-1;i++)
    { 
        if(right[i]<=A[i])
        {
            continue;
        }
        s.insert(A[i]);
        auto it=s.find(A[i]); // to find if its the leat elemenr in the set
        if(it==s.begin())
        {
            continue;
        }
        it--;
        ans=max(ans,*it+A[i]+right[i]);
    }
    return ans;
}
