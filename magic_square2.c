#include <stdio.h>

int n,num[1000][1000],x,y,r=1,s[1000000];
int main(){
    printf("Enter n value : ");
    scanf("%d",&n);
    for(y=1;y<=n;y++){

        for(x=1;x<=n;x++){

            scanf(" %d",&num[x][y]);

        }
    } 

    /////// Row  /////////
    for(y=1;y<=n;y++){

        for(x=1;x<=n;x++){

            s[r] += num[x][y];
        
        }
        r++; 
    }
        
    ///////  Col  /////////
    for(x=1;x<=n;x++){

        for(y=1;y<=n;y++){

            s[r] += num[x][y];
        
        }

        r++;
    }

    /////// diagonal  /////////
    for(y=1;y<=n;y++){

        for(x=1;x<=n;x++){

            if(y==x )
                s[r] += num[x][y];

            if(x+y == n+1)
                s[r+1] += num[x][y];
        
        }
    }
 for(int i =1;i<=r+1;i++){
        if(s[i]!= n*(n*n+1)/2){
            printf("NO");
            return 0;
        }
 }
 printf("YES");
return 0;
}