#include <stdio.h>
int x[1000000];
int n,i,j;
  
int main(){
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(x[j]>x[j+1]){
                int temp;
                temp = x[j];
                x[j] = x[j+1];
                x[j+1]= temp;
            }
        
        }    
    }
    printf("min = %d \nmax = %d",x[0],x[n-1]);
}