#include<stdio.h>
int main(){
    struct Student{
        int rollno;
        char name[100];
        float marks;
    };
    int n;
    scanf("%d",&n);
    struct Student arr[n];
    for(int i=0 ;i<n ;i++){
        scanf("%d ",&arr[i].rollno);
        scanf("%s ",&arr[i].name);
        scanf("%f\n",&arr[i].marks);
    }
    char grade;
    for(int i=0 ; i<n ; i++){
        if(arr[i].marks>=85){
            grade='A';
        }
        else if(arr[i].marks<84 && arr[i].marks>70){
            grade='B';
        }
         else if(arr[i].marks<70){
            grade='C';
        }
        printf("Roll Number: %d, Name: %s, Grade: %s\n",arr[i].rollno,arr[i].name,grade);
    }
    return 0;
}