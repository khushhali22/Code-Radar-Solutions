#include <stdio.h>
int main() {
    char x[100];
    scanf("%s",x);
    int n=0;i=0;
    while(x[i]!='\0'){
        n++;
        i++;
    }
    for(int i=0 ; i<n; i++){
            printf("%c",x[n-i-1]);
    }
    
    return 0;
}