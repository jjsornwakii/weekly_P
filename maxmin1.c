#include <stdio.h>
int x[1000000];
int n,i;
 
int main(){
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    
    int min=x[0],max=x[0];
    for(i=0;i<n;i++){
        
        if(min>x[i])
            min = x[i];

        if(max<x[i])
            max = x[i];

    }
    printf("min = %d \nmax = %d",min,max);
}