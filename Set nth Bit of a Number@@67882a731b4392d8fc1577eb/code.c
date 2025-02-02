#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int y=(1<<b)|a;
    printf("%d",y);

    return 0;
}