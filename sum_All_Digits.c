#include <stdio.h>
int pp,n,i,c=0,N,q,a=0;
int power(int y){
    pp=1;
    for(int j =y;j>0;j--)
        pp *=10;
    return pp;
}
int main(){
    printf("Enter Number : ");
    scanf("%d",&n);
while(c!=1){
    N = n;
    c=0;
    a=0;
    while(n!=0){
        n/=10;
        c++;
    }
    for(i=c-1;i>=0;i--){
        q = N/power(i);
        a+= q;
        N-= power(i)*q;
    }
    n = a;
}
    printf("%d",a);
    return 0;
}
