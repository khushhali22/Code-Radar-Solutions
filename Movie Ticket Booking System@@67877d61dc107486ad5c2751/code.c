#include<stdio.h>
#include<string.h>
int main(){
    struct MovieTicket{
        char name[100];
        char typr[100];
        int price;
    };
    int n;
    scanf("%d",&n);
    struct MovieTicket arr[n];
    for(int i=0; i<n ; i++){
        scanf("%s",&arr[i].name);
        scanf("%s",&arr[i].typr);
        scanf("%d",&arr[i].price);
    }
    float c=0,b=0,t=0;
    for(int i=0 ; i<n ; i++){
        if(strcmp(arr[i].typr,"Standard")==0){
            c=c+arr[i].price;
        }
        else if(strcmp(arr[i].typr,"Permium")==0){
            b=b+arr[i].price;
        }
        else if(strcmp(arr[i].typr,"VIP")==0){
            t=t+arr[i].price;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",c,t,b);
    return 0;
}