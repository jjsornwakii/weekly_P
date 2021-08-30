#include <stdio.h>

int n,i,j;

int isPrime(int x){
    for(i=2;i<=n/2;i++){
        if(i*i<=n){
            if(n%i==0){
                x = 1;
                return x;
            }
        }
    }
    return x;
}

int main(){
    printf("Enter number : ");
    scanf("%d",&n);

    if(isPrime(n)==1)
        printf("Not Prime");
    else
        printf("Prime");
    return 0;
}