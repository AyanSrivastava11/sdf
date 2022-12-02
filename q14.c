#include<stdio.h>
int main(){
    int k,i,j;
    
    for ( i = 1; i <= 4; i++) {
        k = i;
        for ( j = 1; j <= 7; j++){

            if (j>= 5-i && j<=i+3){
        
                printf("%d",k);
                j<4?k++:k--;
            }
            else
            printf(" ");    
            
        }
        printf("\n");
    }
}
/*OUTPUT: *
1
232
34543
4567654

*/