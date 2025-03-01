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
    float min=-1.0f;
    for(int i=0; i<n ; i++){
        if(min>arr[i].marks){
            min=arr[i].marks;
        }
        }
        printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f"arr[min].rollno,arr[min].name.arr[min].marks);
    return 0;
}
