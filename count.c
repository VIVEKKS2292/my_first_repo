//C program to find freqency of numbers 
#include<stdio.h>
#include<stdlib.h>  // to be added for malloc and calloc declaration

void read(int *, int);
int *compute(int *,int);
void display(int *,int *, int);

int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int *a = NULL;
    int *b = NULL;
    a = (int *)malloc(n*sizeof(int));
    b = (int *)calloc(n,sizeof(int));
    read(a,n);
    b = compute(a,n);  
    display(a,b,n);
    return 0;  
}

void read(int *a, int n){
    printf("Enter the ̥elements:\n");
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}

int *compute(int *a, int n){
    int *store = (int *)calloc(n,sizeof(int));
    int i,j,k,c;
    for(i=0; i< n;i++){
        c=0; //for reference

        //To avoid repreatation of count for same number.
        for(k=i-1;k!=-1;k--)
            if(a[i] == a[k]){
            c++;
            break;
            }

        if(c!=0)
            continue;
        
        //Storing tthe frequency
        store[i]++;

        for(j=i+1; j< n;j++)
            if(a[i]==a[j])
            store[i]++;
    }
    return store;  
}

void display(int *a,int *b, int n){
    int i,j;
    for(i=0;i<n;i++){
        if(b[i]>=2)
            printf("%d appears %d times.\n",a[i],b[i]);
    }
}


//snipet for malloc and calloc function

/*
To define malloc function we should add "stdlib.h" in the include section.
 malloc definition
 
 int * a  = (int *)malloc(n*sizeof(int))

 calloc definition

 int * a  = (int *)calloc(n, sizeof(int))
 */
