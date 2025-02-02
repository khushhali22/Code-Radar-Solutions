#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int y=a&~(1<<b);
    // int result=a&y;
    printf("%d",y); 
    return 0;
}