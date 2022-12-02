#include<stdio.h>
int main(){
    int i,j,k =0;

    for ( i = 1; i <= 7; i++) {
        
        for ( j = 1; j <= 7; j++){

            if (j == i || j == 8-i){
            if(i == 8-j)
            printf("/");

            else
            printf("\\");
        }
            else
            printf("*");
               /* if()
            printf("\");
            else
            printf("/");
            }    
            */
        }
        printf("\n");
    }
}
/*
            if (j == i || j == 8-i)
USING THIS TO PRINT X:

 */