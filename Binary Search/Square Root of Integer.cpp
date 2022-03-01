int Solution::sqrt(int A) {
    int i = 0;
    while(1){
        if(pow(i,2)<=A && pow(i+1,2)>A)
            return i;
        i++;
    }
    return -1;
}
