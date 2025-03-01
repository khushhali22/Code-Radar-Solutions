#include<stdio.h>
int main(){
    struct Vehicle{
        char number[100];
        char typr[100];
        int toll;
    };
    int n;
    scanf("%d",&n);
    struct Vehicle arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i].number);
        scanf("%s",&arr[i].typr);
        scanf("%d",&arr[i].toll);
    }
    float c=0,b=0,t=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i].typr==Car){
            c=c+arr[i].toll;
        }
        else if(arr[i].typr==Bike){
            b=b+arr[i].toll;
        }
        else if(arr[i].typr==Truck){
            t=t+arr[i].toll;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",c,b,t);
    return 0;
}