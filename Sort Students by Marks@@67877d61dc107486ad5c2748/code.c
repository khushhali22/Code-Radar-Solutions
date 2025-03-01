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
    for(int i=0; i<n-1 ; i++){
        for(int j=i+1 ; j<n-i-1 ; j++){
        if(arr[j].marks>arr[i].marks){
            float temp=arr[i].marks;
            arr[i].marks=arr[j].marks;
            arr[j].marks=temp;
        }
        }
        }
        for(int i=0 ; i<n ; i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",arr[i].rollno,arr[i].name,arr[i].marks);
        }
    return 0;
}
