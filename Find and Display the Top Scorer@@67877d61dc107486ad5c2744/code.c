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
    for(int i=0 ;i<n ;i++){
        scanf("%d ",&arr[i].rollno);
        scanf("%s ",&arr[i].name);
        scanf("%f\n",&arr[i].marks);
    }
    int max=arr[0];
    int x=-1;
    for(int i=0; i<n ;i++){
        if(max<arr[i].marks){
            max=arr[i].marks;
            x=i;
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",arr[x].rollno,arr[x].name,arr[x].marks);
    return 0;
}