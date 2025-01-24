#include <stdio.h>
int main() {
    int a,b;
    sacnf("%d %d",&a,&b);
    if(a>b){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}