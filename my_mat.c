#include "my_mat.h"
#include <stdio.h>

int min(int a, int b){
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
void makematrix(){
        for (int i = 0; i < TEN; i++) {
            for (int j = 0; j < TEN; j++) {
                if(a[i][j]==0 && i!=j){
                    a[i][j] = 99; 
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
}
void BCase(int b,int c){
    makematrix();
    if(a[b][c]==99 || a[b][c]==0){
        printf("\n False");
    } 
    else{
    printf("\n True");
    }
    }
void CCase(int x , int y){
    makematrix();
        int *ptr = a;
            for (int i = 0; i <(10*x)+y; i++)
            {
                ptr++;
            }
            if(*ptr == 99 || *ptr == 0){
            printf("%d \n" ,-1);
        }
        else{
            printf("%d \n" ,*ptr);
        }
}
