#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    int check=0;
    int sum = 0;
    int totalSum = 0;
    scanf("%s",str);
 
    for(int i =0;i<=strlen(str);i++){

        if(str[i]>='0'&&str[i]<='9'){
            
            if(check == 0){

                sum = str[i] - 48 ;
                check = 1 ;
            }

            else{
                sum *=10;
                sum += str[i] - 48;

            }
        
        }
        else{
            totalSum += sum;
            check = 0;
            sum = 0;
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