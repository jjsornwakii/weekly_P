#include <stdio.h>

int n,num[1000][1000],x,y,z,Z=1,r=1,s[1000000],c[1000000],ch[1000];
int main(){
    printf("Enter n value : ");
    scanf("%d",&n);
    for(y=1;y<=n;y++){

        for(x=1;x<=n;x++){

            scanf(" %d",&num[x][y]);

        }
    }

for(z=1;z<=n*n;z++){
    for(y=1;y<=n;y++){
        for(x=1;x<=n;x++){
                if(z==num[x][y]){
                    ch[z]++;
                    if(ch[z]>=2){
                        printf("NO");
                        return 0;
                    }
                    break;
                }
                
        }
            
    }
} 

    /////// Check Row  /////////
    for(y=1;y<=n;y++){

        for(x=1;x<=n;x++){

            s[r] += num[x][y];
        
        }
    if(r!=1){
        if(s[r]!=s[r-1]){
            printf("NO");
            return 0;
        }
    }
        r++;
    }

    
    /////// Check Col  /////////
    for(x=1;x<=n;x++){

        for(y=1;y<=n;y++){

            s[r] += num[x][y];
        
        }
        if(s[r]!=s[r-1]){
            printf("NO");
            return 0;
        }

        r++;
    }

    
    /////// Check diagonal  /////////
    
    for(y=1;y<=n;y++){

        for(x=1;x<=n;x++){

            if(y==x )
                s[r] += num[x][y];

            if(x+y == n+1)
                s[r+1] += num[x][y];
        
        }
    }

        if(s[r]!=s[r-1]||s[r]!=s[r+1]){
            printf("NO");
            return 0;
        }


        printf("YES");
        return 0;

}