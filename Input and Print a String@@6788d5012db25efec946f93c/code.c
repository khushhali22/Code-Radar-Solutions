#include <stdio.h>
int main() {
    char n[80];
    scanf("%[^\n]%*c",&n)
    printf("You entered: %s",n);
    return 0;
}