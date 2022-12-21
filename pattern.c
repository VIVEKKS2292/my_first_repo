#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of trangle:\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0; j < n-i; j++)
         printf("*\t");
         printf("\n");
    }
    return 0;

}