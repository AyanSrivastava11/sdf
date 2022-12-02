#include<stdio.h>
int main(){
    int i,j,k = 0,n,a;
    printf("enter rows: ");
    scanf("%d",&n);
    a = (n+1)/2;
    for(i=1;i<=n;i++){
        if(i<=a)
        k++;
        else
        k--;

        for(j=1;j<=n;j++)
        {
            if(j>=n+1-k && j<= n-1+k)
            printf("*");

            else
            printf(" ");
        }
        printf("\n");
    }
}