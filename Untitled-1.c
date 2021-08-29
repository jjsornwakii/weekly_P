#include <stdio.h>
int n;
char str[10000];
int main()
{
   scanf("%[^\n]s",str);
   n=-1;
   for(int i=0;str[i]!='\0';i++){
    
       if(str[i]>='0'&&str[i]<='9'){
            
            if(n==-1)
                n=str[i]-48;
            
            else{
                n*=10;
                n+=str[i]-48;
            }
       }
       else{
            if(n==-1)
                n=1;

            for(int k=0;k<n;k++)
                printf("%c",str[i]);
            
            n=-1;
       }
   }
}