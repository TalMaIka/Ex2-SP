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
            int x1 ;
            scanf("%d",&x1);
            int y1 ;
            scanf("%d",&y1);
            BCase(x1,y1);
            break;
        
        case 'C':
            int x ;
            scanf("%d",&x);
            int y ;
            scanf("%d",&y);
            CCase(x,y);
            break;
            
        case 'D':
            flag = 0;
            break;
    }

    }
    return 0;
}

