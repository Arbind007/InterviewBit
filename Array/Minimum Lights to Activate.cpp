int Solution::solve(vector<int> &A, int b) {
    int n = A.size();
    int i=0,count=0,next,prev;
    while(i < n){
        next = i+b-1;
        prev = i-b+1;
        if(prev = 0)
            prev = 0;
        while(next>=prev){
            if(A[next])
                break;
            next--;
        }
        if(next>=prev){
            count++;
            i = next+b;
        }
        else{
            return -1;
        }
    }
    return count;
}
