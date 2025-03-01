#include<stdio.h>
int main(){
    struct Employee{
        int id;
        char name[100];
        int salary;
    };
    int n;
    scanf("%d",&n);
    struct Employee arr[n];
    float bonous;
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i].id);
        scanf("%s",&arr[i].name);
        scanf("%d",&arr[i].salary);
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i].salary<50000){
            bonous=arr[i].salary *0.10;
        }
        else{
             bonous=arr[i].salary*0.5;
        }
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",arr[i].id,arr[i].name,bonous);
    }
    return 0;
}