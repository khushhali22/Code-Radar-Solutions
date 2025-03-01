#include<stdio.h>
#include<limits.h>
int main(){
    struct Book{
        char title[100];
        char author[100];
        float price;
    };
    int n;
    scanf("%d",&n);
    struct Book arr[n];
    for(int i=0 ;i<n ;i++){
        scanf("%s ",&arr[i].title);
        scanf("%s ",&arr[i].author);
        scanf("%f\n",&arr[i].price);
    }
    float threshold;
    int index;
    scanf("%f",&threshold);
    printf("Books above price %.2f:\n",threshold);
    for(int i=0 ; i<n ; i++){
        if(threshold>arr[i].price){
        printf("Title: %s, Author: %s,Price: %.2f\n",arr[i].title,arr[i].author,arr[i].price);
        }
        else{
            continue;
        }
    }
    return 0;
}