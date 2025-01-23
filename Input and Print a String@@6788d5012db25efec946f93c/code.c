#include <stdio.h>
int main() {
    char n[100];
    scanf("%[^\n]%*c",&n)
    printf("You entered: %s",n);
    return 0;
}