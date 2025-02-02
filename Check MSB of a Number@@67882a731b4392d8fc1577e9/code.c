#include <stdio.h>
int main() {
    long n;
    scanf("%ld",&n);
    int size=sizeof(n)*8;
    int y=n>>(size-1);
    if(n&1==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}