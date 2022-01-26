int Solution::solve(vector<int> &A) {
    map<int,int>mp; 

    for(int i=0;i<A.size();i++)
        mp[A[i]]++;

    int count = 0;
    for(auto &it:mp)
        count += it.second;
    for(auto &it:mp){
        count -= it.second;
        if(count == it.first)
            return 1;
    }
    return -1;
}
