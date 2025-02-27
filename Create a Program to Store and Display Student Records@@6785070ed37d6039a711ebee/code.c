#include<stdio.h>
int main(){
    struct Student{
        int rollno;
        char name[100];
        float marks;
    };
    int n ;
    scanf("%d",&n);
    struct Student arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a.rollno);
        // getchar();
        scanf("%[^\n]c ",a.name);
         getchar();
        scanf(" %f",&a.marks);
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",a.rollno,a.name,a.marks);
        
    }
    return 0;
}