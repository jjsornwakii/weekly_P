#include <stdio.h>

int n,i,j;
int main(){
    printf("Enter Butterfly Size : ");
    scanf("%d",&n);

    for(i = 1;i<2*n;i++){

        for(j = 1;j<2*n;j++){

            if(i<=j&&i+j>=2*n || i>=j&&i+j<=2*n )
                printf("* ");
            else
                printf("  ");

        }
        printf("\n");
    }
return 0;
}




