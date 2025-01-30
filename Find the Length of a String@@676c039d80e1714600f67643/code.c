#include <stdio.h>
int main() {
    char x[100];
    scanf("%s",x);
    int c=0,i=0;
    while(x[i]!='\0'){
        c++;
        i++;
    }
    printf("%d",c);
    return 0;
}