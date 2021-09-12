#include <stdio.h>
int m,n,i,j,k;
int num[2][10000][10000];
int main(){
    printf("Enter m n : ");
    scanf("%d %d",&m,&n);

    for(k=0;k<2;k++){
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf(" %d",&num[k][i][j]);
                if(k==1){
                    num[k][i][j]+=num[k-1][i][j];
                }
            }
        }
    }
    
    printf("Ans : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",num[1][i][j]);
        printf("\n");
    }
    return 0;
}
