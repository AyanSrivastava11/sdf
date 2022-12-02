#include<stdio.h>
int main(){
    int i,j;
    char k;

    for(i=1;i<=4;i++){
        k = 'A';

        for(j=1;j<=7;j++){
            if(j<=5-i || j>=i+3){
            printf("%c",k);
            if(j<4)
            k++;
            else
            k--;
        }
            else{
            printf(" ");
            if(j==4)
            k--;
            }
        }
        printf("\n");
    }
}/*
OUTPUT:

ABCDCBA
ABC CBA
AB   BA
A     A
*/

