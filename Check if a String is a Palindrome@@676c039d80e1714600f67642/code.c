#include <stdio.h>
int main() {
    int f=1;
    char x[100];
    scanf("%s",x);
    int arr[100];
    int c=0,i=0;
    while(x[i]!='\0'){
        c++;
        i++;
    }
    for (int i=0; i<c ;i++){
        if(arr[c-i-1]!=x[i]){
            f=0;
            break;
        }
    }
    if(f==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}