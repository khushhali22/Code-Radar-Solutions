#include<stdio.h>
int main(){
    struct Rectangle{
        int length;
        int breadth;
    };
    int n ;
    scanf("%d",&n);
    struct Rectangle arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i].length);
        scanf("%d",&arr[i].breadth);
    }
    for(int i=0; i<n ; i++){
        float area=arr[i].length*arr[i].breadth;
        float perimeter=2*(arr[i].length+arr[i].breadth);
        printf("Rectangle 1: Area = %.2f, Perimeter = %.2f\n",area,perimeter);
    }
    return 0;
}