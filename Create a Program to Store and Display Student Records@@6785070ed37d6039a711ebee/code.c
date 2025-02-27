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
        scanf("%d",&arr[i].rollno);
        // getchar();
        scanf("%[^\n]c ",arr[i].name);
         getchar();
        scanf(" %f",&arr[i].marks);
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",arr[i].rollno,arr[i].name,arr[i].marks);
        
    }
    return 0;
}