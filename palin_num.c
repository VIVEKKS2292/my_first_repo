//C program to check whether a given number is palindromic or not without reversing it.
/*
Creating a matrix of digits of given number. 
checking the palindrimicity of that matrix.
*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool kcmatrix(int a){
    int b[10],rem,i;
    for(i=0;a!=0;i++){
        rem = a%10;
        b[i] = rem;
        a = a/10; 
    }
    int n = i;
    int j,c=0;
    for(i=0,j=n-1; i < n/2; i++,j--)
        if(b[i] != b[j])
            return false;
    
    return true;
}

int main(){
    int a;
    bool r;
    printf("Enter the number to be checked:\n");
    scanf("%d",&a);
    r = kcmatrix(a);
    if(r)
        printf("Given number is palindromic\n");
    else  
        printf("Given number is not palindroimc\n");
    return 0;
}

/*
To use bool datatype
you have to include two headerfiles
1)stdbool.h
2)stdlib.h*/