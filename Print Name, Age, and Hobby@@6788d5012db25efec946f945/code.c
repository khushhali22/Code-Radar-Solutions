#include <stdio.h>
int main() {
    char n[100];
    int age;
    char h[100];
    scanf("%s %d %s",n,&age,h);
    printf("Name: %s\n",n);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",h);
    return 0;
}