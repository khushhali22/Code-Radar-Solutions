#include <stdio.h>
int main() {
    int n;
    int p=0;
    scanf("%d",&n);
    if(n==0){
        printf("-1");
    }
    else{
        while((n&1)==0){
            n=n>>1;
            p++;
        }
    }
    printf("%d",p);
    return 0;
}