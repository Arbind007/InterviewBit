vector<int> Solution::findOccurences(vector<int> &A) {
    map <int,int> mp;
    for(auto &it:A){
        mp[it]++;
    }
    A.clear();
    for(auto &it:mp){
        A.push_back(it.second);
    }
    return A;
}
