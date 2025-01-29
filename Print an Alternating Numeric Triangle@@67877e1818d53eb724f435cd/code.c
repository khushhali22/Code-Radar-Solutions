#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int s=1;
    for(int i=1 ; i<=n ; i++)
    {
        if(i%2!=0){
            s=1;
        }
        else {
            s=0;
        }
        for(int j=1 ; j<=i ; j++)
        {
            printf("%d ",s);
            if(s==1)
            {
                s=0;
            }
            else
            {
                s=1;
            }
        }
        printf("\n");
    }
    return 0;
}