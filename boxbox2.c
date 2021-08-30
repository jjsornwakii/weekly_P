#include <stdio.h>

int n,i,j;
int main(){
    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n*n;i++){
        printf("*");
        
        if(i%n==0)
            printf("\n");
    }
    return 0;
}