//C program to check whether a given string is palindromic or not using another string
/*
read the string 
create reverse string using - b[j] = a[i] i=n-1 and j=0  n  =length*/

#include<stdio.h>
#include<string.h>
// #include<stdbool.h>
// #include<stdlib.h>


// char *reverse_str(char a[]){
//     char b[20];
//     int n,i,j;
//     n = strlen(a);
//     for(i=n-1,j=0;i!=-1;i--,j++)
//         b[j] = a[i];

//     return b;
// }

int main(){
    char a[20],b[20];
    // char *c = NULL;
    // int d = 0;
    printf("Enter the string:\n");
    scanf("%s",a);
    // c = reverse_str(a);
    // d = strcmp(a,c);

    // if(d)
    //     printf("Given string is palidromic.\n");
    // else
    //     printf("Given string is not palidromic.\n");

    // return 0;
    int n,i,j;
    n = strlen(a);
    for(i=n-1,j=0;i!=-1;i--,j++)
            b[j] = a[i];
    for(int k=j; k<20;k++){
            b[k]='\0';
    }
    // printf("%s",b);
    
    int d;
    d = strcmp(a,b);

    if(d==0)
        printf("Given string is palidromic.\n");
    else
        printf("Given string is not palidromic.\n");
    return 0;
}

/*yet to be sloved on

1) first approach of returning a address. 
*/
