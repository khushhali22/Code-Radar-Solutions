#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=n ; i<=1 ; i--)
    {
        for(int j=1 ; j<=n ; j++){
              int s=64+j;
              printf("%c ",(char)s);
        }
        printf("\n");
    }
    return 0;
}