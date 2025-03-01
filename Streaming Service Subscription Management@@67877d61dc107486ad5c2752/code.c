#include<stdio.h>
#include<string.h>
int main(){
    struct Subscription{
        char name[100];
        char typr[100];
        int price;
    };
    int n;
    scanf("%d",&n);
    struct Subscription arr[n];
    for(int i=0; i<n ; i++){
        scanf("%s",&arr[i].name);
        scanf("%s ",&arr[i].typr);
        scanf("%d",&arr[i].price);
    }
    float c=0,b=0,t=0;
    int ub=0 ,us=0,up=0;
    for(int i=0 ; i<n ; i++){
        if(strcmp(arr[i].typr,"Basic")==0){
            c=c+arr[i].price;
            ub++;
        }
        else if(strcmp(arr[i].typr,"Standard")==0){
            b=b+arr[i].price;
            us++;
        }
        else if(strcmp(arr[i].typr,"Permium")==0){
            t=t+arr[i].price;
            up++;
        }
    }
    printf("Basic: %d, Revenue: %.2f; Standard: %d, Revenue: %.2f; Permium: %d, Revenue: %.2f",ub,c,us,b,up,t);
    return 0;
}