bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int k) {
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    for(int i=k;i<arrive.size();i++){
        if(arrive[i] < depart[i-k])
            return false;
    }
    return true;
}
