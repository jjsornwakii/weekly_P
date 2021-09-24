#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    int sum = 0;
    int totalSum = 0;
    int k=1;
    scanf("%s",str);
 
    for(int i =strlen(str);i>=0;i--){

        if(str[i]>='0'&&str[i]<='9'){
            
            sum += ((str[i] - 48)*k);
            k*=10;
            
        }
        else{
            
            totalSum += sum;
            sum = 0;
            k=1;
        }
    }
    if(totalSum<10){
        printf("000");
    }
    else if(totalSum<100){
        printf("00");
    }
    else if(totalSum<1000){
        printf("0");
    }
    printf("%d",totalSum);
}