#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    int s = 0,e = A.size() - 1,ans,mid;
    while(s<e){
        mid = (s+e)/2;
        cout << A[mid] << " ";
        if(B <= mid){
            s = mid + 1;
            ans = mid;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector <int> v = {1, 2, 5, 5};
    int n = 3;
    cout << solve(v,n) << endl;
    return 0;
}
