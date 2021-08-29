#include <stdio.h>

char str[100];
int i,j,n = -1;
int main()
{
    
    scanf("%[^\n]s",str);

    for(i=0;str[i]!='\0';i++){

        if(str[i]>='0'&&str[i]<='9'){

            if(n==-1)
            {
                n = str[i] - 48 ;
            }
            else
            {  
                n *=10;
                n += str[i] - 48;
            }
        }
        else
        { 
            if(n==-1)  //||(str[i]>'Z'&&str[i]<'a')||(str[i]>'z')||str[i]<'A'
                n=1;

            for(j=0;j<n;j++)
            {
                
                printf("%c",str[i]);
            }  
            n = -1;
        }
    }   
}