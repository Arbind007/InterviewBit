vector<int> Solution::plusOne(vector<int> &A) {
    vector <int> ans;
    int n = A.size(),carry=1;
    for(int i=n-1;i>=0;i--){
        if(carry){
            int x = carry + A[i];
            ans.push_back(x%10);
            carry = x / 10;
        }
        else{
            ans.push_back(A[i]);
        }
    }
    if(carry){
        ans.push_back(carry);
    }
    reverse(ans.begin(),ans.end());
    while(!ans[0])
        ans.erase(ans.begin());
    return ans;
}
