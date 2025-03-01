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
        scanf("%s",&arr[i].name);
        scanf("%f",&arr[i].marks);
    }
    int inputrollno;
    scanf("%d",&inputrollno);
    for(int i=0 ; i<n ; i++){
        if(arr[i].rollno==inputrollno){
            printf("Roll Number: %d, Name: %s, Marks: %.2f",arr[i].rollno,arr[i].name,arr[i].marks);
            return 0;
        }
    }
    printf("Student not found");
    return 0;
}