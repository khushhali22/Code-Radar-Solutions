#include<stdio.h>
int main(){
    struct Day{
        char name[100];
        int temp;
    };
    int sum=0;
    struct Day arr[7];
    for(int i=0 ; i<7 ; i++){
        scanf("%s",&arr[i].name);
        scanf("%d",&arr[i].temp);
        sum+=arr[i].temp;
    }
    float avg=sum/7;
    printf("Average Temperature: %.2f",avg);
    return 0;
}