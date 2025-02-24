#include <stdio.h>
int main() {
    char x[100];
    scanf("%s",x);
    int n=0 ,i=0;
    while(x[i]!='\0'){
        n++;
        i++;
    }
    for(int j=0 ; j<n; j++){
            printf("%c",x[n-j-1]);
    }
    
    return 0;
}