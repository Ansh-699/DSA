#include<stdio.h>
void main(){
    int i,j,n;
    scanf("%d",&n);
    for(int i=0 ; i<=n ; i++){
        for (int j=1 ; j<=i ; j++){
            printf("%d",&i);
        }
        printf("\n");
    }
}