#include <stdio.h>
int main() {
    int n,y;
    scanf("%d %d",&n,&y);
    int result=n^(1<<y);
    printf("%d",result);

    return 0;
}