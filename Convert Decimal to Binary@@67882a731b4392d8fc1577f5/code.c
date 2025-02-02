#include <stdio.h>
int main() {
    int n;
    int i=0;
    int binary[32];
    scanf("%d",&n);
    if(n==0){
        printf("0");
        return 0;
    }
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1 ; j>=0 ; j--){
        printf("%d",binary[j]);
    }
    return 0;
}