#include<stdio.h>
#include<limits.h>
int main(){
    struct Student{
        int rollno;
        char name[100];
        float marks;
    };
    int n;
    scanf("%d",&n);
    struct Student arr[n];
    float sum=0;
    for(int i=0 ;i<n ;i++){
        scanf("%d ",&arr[i].rollno);
        scanf("%s ",&arr[i].name);
        scanf("%f\n",&arr[i].marks);
        sum+=arr[i].marks;
    }
    float avg=sum/n;
    printf("Average Marks: %.2f",avg);
    return 0;
}