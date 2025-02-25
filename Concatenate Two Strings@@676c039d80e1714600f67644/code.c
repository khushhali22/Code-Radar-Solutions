#include <stdio.h>
int main() {
    char x[100];
    char y[100];
    // char z[100];
    // char q[100];
    scanf("%[^\n]c",x);
    scanf("%s",y);
    // scanf("%s",z);
    // scanf("%s",q);
    printf("%s%s",x,y);
    return 0;
}