#include "my_mat.h"
#include <stdio.h>

int min(int *a, int *b){
    if(a<b)
        return a;
    else
        return b;
}
int a[TEN][TEN];
void ACase(){
    for (int i = 0; i < TEN; i++){
        for (int j = 0; j < TEN; j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void BCase(int x , int y){
   for (int i = 0; i < TEN; i++) {
            for (int j = 0; j < TEN; j++) {
                if(a[i][j]==0 && i!=j){
                    a[i][j] = 10000;
                }
            }

        }
        for (int k = 0; k <TEN; k++)
        {
            for (int i = 0; i <TEN; i++)
            {
                for (int j = 0; j <TEN; j++)
                {
                        a[i][j] = min(a[i][j], a[i][k] + a[k][j]);

                }

            }

        }
    if(a[x][y]!=0){
        printf("true");
    }
    else{
        printf("false");
    }
}


