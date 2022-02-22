int Solution::solve(int A) {
int i=0,x=0;
A=abs(A);
while(x<A || (x-A)%2!=0){
    i++;
    x+=i;
}
return i;
}
