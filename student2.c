#include<stdio.h>
#include<stdlib.h>

struct student {
    char name[10];
    int sem;
    int sub[8];
}s[10];

void read(struct student *, int);
void grand_total(struct student *, int *, int);
void avg(int *, double *, int);
int min_avg(double *, int);


int main(){
    //struct student s[10];
    int ga_to[10],n,i;
    double av[10];
    printf("Enter total number of students:\n");
    scanf("%d",&n);
    read(s,n);
    int choice;
    int min;
    for(;;){
    printf("Enter the choice:\n1 :: For Grand total of each student.\n2 :: For Average of each student.\n3 :: To find the student with minimum averge.\n0 :: To stop.\n");
    scanf("%d",&choice);

    switch(choice){
        case 1: grand_total(s, ga_to, n);
                break;
        case 2: avg(ga_to, av, n);
                break;
        case 3: min = min_avg(av, n);
                printf("Details of the student with lowest average score is given below:\n");
                printf("NAME : %s\nSEM : %d\n",s[min].name,s[min].sem);
                printf("His 8 subjects scores are :\n");
                for(i =0; i < 8; i++ )
                    printf("Subject %d: %d\n",i+1,s[min].sub[i]);
                break;
        case 0: exit(0);
    }
    }
    return 0;
}

void read(struct student *a, int n){
    int i;
    for(i=0;i<n;i++){
        printf("Enter the details of student %d:\n",(i+1));
        printf("Name : ");
        scanf("%s",(a+i)->name);
        printf("Enter the sem : ");
        scanf("%d",&(a+i)->sem);
        printf("Enter the subjects marks : \n");
        for(int j=0; j < 8; j++)
            scanf("%d",&(a+i)->sub[j]);
    }
}

void grand_total(struct student *a, int *ga_to, int n){
    int i,j,sum;
    for(i=0;i<n;i++){
        sum = 0;
        for(j=0;j<8;j++){
            sum += (a+i)->sub[j];
        }
    ga_to[i] = sum;
    printf("The grand total of student %d is %d.\n",(i+1),sum);   
    }
}

void avg(int *ga_to, double *av, int n){
      int i;
      for(i=0;i<n;i++){
        av[i] = (double)ga_to[i]/8; 
        printf("The average of student %d is %lf.\n",(i+1),av[i]);
      }
}

int min_avg(double *av, int n){
    int i,k=0;
    double min = av[k];
    for(i=1; i < n; i++)
        if(av[i] < min){
            min = av[i];
            k=i; 
        }
    return k;   
}
