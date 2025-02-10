#include <stdio.h>
int main() {
    long long  n;
    scanf("%lld",&n);
    long size=sizeof(n)*8;
    long y=n>>(size-1);
    if(y&1==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}