int Solution::solve(vector<int> &A, int B) {
int ans = 0;

for(int i=0;i<B;i++){
    ans += A[i];
}

int temp = ans;

for(int i=0;i<B;i++){
    temp -= A[B - i - 1];
    temp += A[A.size() - i - 1];
    ans = max(ans, temp);
}

return ans;
}
