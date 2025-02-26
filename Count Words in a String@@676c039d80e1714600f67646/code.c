#include <stdio.h>
int main() {
    char x[1000];
    int c=0,i=0;
    fgets(x,sizeof(x),stdin);
    while(x[i]!='\0'){
        if((x[i]==' ' || x[i]=='\0')){
            c++;
        }
        i++;
    }
    // if(x[0]!=' ' && x[0]!='\0'){c++;}
     printf("%d",c);
    return 0;
}