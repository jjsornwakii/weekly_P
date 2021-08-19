#include <stdio.h>

int r,n,i,j,k;
int main(){
    scanf("%d",&n);

for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("* ");
        }
        for(k=((n-i)*2)-3;k>=1;k--){
            printf("A ");
        }
    if(i==n-1){
            for(r=1;r<=n-1;r++)
                printf("* ");
        
    }
    else{
        for(j;j>0;j--){
            printf("* ");
        }
    }
        printf("\n");        
}

for(i=n-1;i>=0;i--){
        for(j=0;j<=i;j++){
            printf("* ");
        }
        
        for(k=((n-i)*2)-3;k>=1;k--){
            printf("A ");
        }
        
        for(j;j>0;j--){
            printf("* ");
        }
        printf("\n");        
    }
    return 0;
}