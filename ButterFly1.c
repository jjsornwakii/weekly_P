#include <stdio.h>
int n,i,j,k,w;
int main(){
    
    printf("Enter Butterfly Size : ");
    scanf("%d",&n);
                                    // ด้านบน
for(w=1;w<n;w++){
    for(i=1;i<=w;i++){
        printf("* ");
    }
    for(i=w;i<n;i++){
        printf("  ");
    }
    for(i=1;i<n-w;i++){
        printf("  ");
    }
    for(i=1;i<=w;i++){
        printf("* ");
    }
    printf("\n");
}

for(i=1;i<n+n;i++){
    printf("* ");                   // บรรทัดที่ n
}
    printf("\n");

for(w=1;w<n;w++){                   // ด้านล่าง
    for(i=1;i<=n-w;i++){
        printf("* ");
    }
    for(i=1;i<=w;i++){
        printf("  ");
    }
    for(i=1;i<w;i++){
        printf("  ");
    }
    for(i=n;i>w;i--){
        printf("* ");
    }
    printf("\n");
}
return 0;
}