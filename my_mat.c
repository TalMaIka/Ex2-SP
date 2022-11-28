#include "my_mat.h"
#include <stdio.h>

int a[TEN][TEN];
void ACase(){
    for (int i = 0; i < TEN; i++){
        for (int j = 0; j < TEN; j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int g=0;
int count=0;
int RecB(int x,int y,int prev){
    if(x==y){
        return 1;
    }
    if(a[x][y]!=0){
        return 1;
    }
    if(count==1000){
        return 0;
    }
    if(a[x][g]!=0 && g!=prev){
            int gbis=g;
            g=0;
            count++;
            return RecB(gbis,y,x);
    }
    else {
        count++;
        g++;
        return RecB(x,y,x);
    }
    return 0;
    
}
void BCase(){
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    if(a[x][y]!=0){
        printf("true \n");
        return;
    }
    if(x==y){
        printf("false \n");
        return;
    }
    int b = RecB(x,y,x);
    if(b==1){
        printf("true \n");
        return;
    }
    printf("False \n");
    return;
    
}
int min(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}