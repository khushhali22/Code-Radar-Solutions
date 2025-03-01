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
    float threshold;
    scanf("%f",&threshold);
    int c=0;
    for(int i=0 ; i<n  ;i++){
        if(threshold<arr[i].marks){
            c++;
        }
    }
    printf("Count of students scoring above %.2f: %d",threshold,c);
    return 0;
}