#include<stdio.h>
int main(){
    struct Student{
        int rollno;
        char name[100];
        float marks;
    };
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ;i<n ;i++){
        scanf("%d ",&arr[i].rollno);
        scanf("%s ",&arr[i].name);
        scanf("%f\n",&arr[i].marks);
    }
    int max=INT_MIN;
    for(int i=0; i<n ;i++){
        if(max<arr[i].marks){
            max=arr[i].marks;
            int x=i;
        }
    }
    printf("Top scorer: Roll Number: %d, Name: %s, Marks: %.2f",arr[x].rollno,arr[x].name,arr[x].marks);
    return 0;
}