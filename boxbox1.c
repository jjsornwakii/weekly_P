#include <stdio.h>

int n,i,j;
int main(){
    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}