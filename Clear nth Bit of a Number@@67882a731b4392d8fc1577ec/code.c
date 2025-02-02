#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    iny y=~(1<<b);
    int result=a&y;
    printf("%d",result); 
    return 0;
}