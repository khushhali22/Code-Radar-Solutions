#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int mid=(n/2)+1;
    for(int i=1 ; i<=mid ; i++){
        for(int j=mid ; j>i ; j--){
            printf(" ");
        }
        for(int k=1 ;k<=2*i-1 ; k++){
            printf("*");
        }
    printf("\n");
    }
    for(int i=mid-1 ; i>=1 ; i--){
        for(int j=mid ; j>i ; j--){
            printf(" ");
        }
        for(int k=1 ; k=2*i-1 ; k++){
              printf("*");   
        }
        printf("\n");
    }
    return 0;
}