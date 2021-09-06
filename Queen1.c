#include <stdio.h>
int i,j,k;
int n,c=0;
int x[100],y[100];
int table[10][10];
int main(){
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }

    for(i=1;i<=n;i++){
            table[x[i]][y[i]] = 1; 
    }

    for(i=1;i<=8;i++){
        for(j=1;j<=8;j++){

            if(table[x[i]][y[j]] == 1){
                for(k=1;k<=8;k++){
                    if(table[x[i]][k] != 1)
                        table[x[i]][k] = 2;

                    if(table[k][y[j]] != 1)
                        table[k][y[j]] = 2;

                        if(table[x[i]-k][y[j]-k] != 1&&y[j]-k>=0&&y[j]-k<=8&&x[i]-k>=0&&x[i]-k<=8)
                            table[x[i]-k][y[j]-k] = 2;
                        
                        if(table[x[i]+k][y[j]+k] != 1&&x[i]+k<=8&&x[i]+k>=0&&y[j]+k>=0&&y[j]+k<=8)
                            table[x[i]+k][y[j]+k] = 2;
                    
                        if(table[x[i]+k][y[j]-k] != 1&&y[j]-k>=0&&y[j]-k<=8&&x[i]+k>=0&&x[i]+k<=8)
                            table[x[i]+k][y[j]-k] = 2;
                        
                        if(table[x[i]-k][y[j]+k] != 1&&x[i]-k>=0&&x[i]-k<=8&&y[j]+k<=8&&y[j]+k>=0)
                            table[x[i]-k][y[j]+k] = 2;
                    
                }
            }
        }
    }
    for( i=1;i<=8;i++){
        for( j=1;j<=8;j++){
            //printf("%d ",table[i][j]);
            if(table[i][j]==0){
                c++;
            }
        }
        //printf("\n");
    }
    printf("%d",c);
    return 0;
}