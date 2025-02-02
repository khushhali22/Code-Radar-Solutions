#include <stdio.h>
int main() {
    int n;
    int c=0;
    scanf("%d",&n);
    while((n&1)==0){
        n=n>>1;
        c++;
    }
    printf("%d",c);
    return 0;
}