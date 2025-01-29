#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        int s=1;
        for(int j=1 j<=i ; j++){
            printf("%d ",s);
            s++;
        }
        printf("\n");
    }
    return 0;
}