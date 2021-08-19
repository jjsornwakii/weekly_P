#include <stdio.h>

int i,j,k=0;
int main(){

for(j=1;j<=10000;j++){

    for(i=1;i<j;i++){

        if(j%i==0){   
            k+=i;
        }
    }
    if(k==j)
        printf("%d\n",j);
    k=0;
}
    return 0;
}


