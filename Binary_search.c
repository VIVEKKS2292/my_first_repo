//C program to search for a elemnt aming given list of eelments 

#include<stdio.h>

void Read(int [], int);
void Binary_search(int [], int);
void select_sort(int [], int);

int main(){
    int a[20],n;
    printf("Enter the total number of elemts:\n");
    scanf("%d",&n);
    Read(a,n);
    select_sort(a,n);
    Binary_search(a,n);
    return 0;
}

void Read(int a[], int n){
    int i;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
         scanf("%d",&a[i]);
}

void select_sort(int a[], int n){
    int i,j,min_arr,temp;
    for(i=0;i<n-1;i++){
        min_arr = i;
        for(j=i+1;i<n;i++)
            if(a[j]<a[min_arr])
                min_arr = j;

    if(min_arr != i){
        temp = a[i];
        a[i] = a[min_arr];
        a[min_arr] = temp;
    }
    }
}

void Binary_search(int a[], int n){
    int key,i,j;
    printf("Enter the key element:\n");
    scanf("%d",&key);

    int low=0,high=n-1,mid=(low+high)/2;
    while(low <= high){
        if(a[mid] == key){
            printf("Search is successful'\n");
            return;
        }
        else if(a[mid] > key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("Search is unsuccessful.\n");
}
