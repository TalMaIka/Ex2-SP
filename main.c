#include <stdio.h>
#include "my_mat.h"

int main(){
int flag = 1;
while (flag){
    char c ;
    scanf("%c",&c);
    switch (c){
        case 'A':
            ACase();
            break;

        case 'B':
            BCase();
            break;
        
        case 'C':
           /* int d;
            scanf("%d",&d);
            int e;
            scanf("%d",&e);
            BCase(d,e);
            */break;
            

        case 'D':
            flag = 0;
            break;
    }

    }
    return 0;
}

