#include<stdio.h>
#include<limits.h>
int main(){
    struct Book{
        char title[100];
        char author[100];
        int price;
    };
    int n;
    scanf("%d",&n);
    struct Book arr[n];
    for(int i=0 ;i<n ;i++){
        scanf("%s ",&arr[i].title);
        scanf("%s ",&arr[i].author);
        scanf("%d\n",&arr[i].price);
    }
    int threshold;
    int index;
    scanf("%d",&threshold);
    printf("books above price %.2f",threshold)
    for(int i=0 ; i<n ; i++){
        if(threshold>arr[i].price){
            index=i;
        }
        printf("Title: %s, Author: %s,Price: %.2f\n",arr[i].title,arr[i].author,arr[i].price);
    }
    return 0;
}