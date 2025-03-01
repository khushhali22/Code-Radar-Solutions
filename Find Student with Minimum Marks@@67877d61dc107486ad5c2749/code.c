#include<stdio.h>
#include<limits.h>
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
    float min=FLT_MAX;
    int index;
    for(int i=0; i<n ; i++){
        if(min>arr[i].marks){
            min=arr[i].marks;
            index=i;
        }
        }
        printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",arr[index].rollno,arr[index].name.arr[index].marks);
    return 0;
}
