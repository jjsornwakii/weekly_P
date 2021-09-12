#include <stdio.h>
int m,n,i,j;
int num1[10000][10000],num2[10000][10000];
int main(){
    printf("Enter m n : ");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf(" %d",&num1[i][j]);
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf(" %d",&num2[i][j]);
    }

    printf("Ans : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",num2[i][j]+num1[i][j]);
        printf("\n");
    }
    
}