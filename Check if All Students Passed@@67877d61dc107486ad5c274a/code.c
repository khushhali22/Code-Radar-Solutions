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
    int f=0;
    for(int i=0 ; i<n ;i++){
        if(arr[i].marks>50){
            f=1;
        }
        else{
            f=0;
            break;
        }
    }
    if(f==0){
        printf("Not All Passed");
    }
    else{
        printf("All Passed");
    }
    return 0;
}