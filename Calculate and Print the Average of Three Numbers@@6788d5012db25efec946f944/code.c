#include <stdio.h>
int main() {
    int a,b,c;
    float d;
    scanf("%d %d %d",&a,&b,&c);
    d=a+b+c;
    int avg=d/3;
    printf("Average: %.2f",avg);
    return 0;
}