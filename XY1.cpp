#include <stdio.h>
int x,y;
int main(){
    printf("Input X Y : ");
    scanf("%d %d",&x,&y);

    x = x+y;
    y = x-y;
    x = x-y;
    
    printf("x = %d y = %d",x,y);
    return 0;
}