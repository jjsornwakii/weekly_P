#include <stdio.h>
int x,y;
int main(){
    printf("Input X Y : ");
    scanf("%d %d",&x,&y);

    y = y*x;
    x = y/x;
    y = y/x;

    printf("x = %d y = %d",x,y);
    return 0;
}
