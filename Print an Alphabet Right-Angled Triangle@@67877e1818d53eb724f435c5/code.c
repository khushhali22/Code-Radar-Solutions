#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        int s=64+i;
        for(int j=1 ; j<=i ; j++){
            printf("%c ",(char)s);
        }
        printf("\n");
    }
    return 0;
}