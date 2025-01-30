#include <stdio.h>
int main() {
    char x[100];
    int c=0;
    fgets(x,sizeof(x),stdin);
    while(x[i]!='\0'){
        if((x[i]==' ' || x[i]=='\n') && x[i+1]!=' ' && x[i+1]!='\0'){
            c++;
        }
        i++;
    }
    if(x[0]!=' ' && x[0]!='\0'){c++;}
     printf("%d",c);
    return 0;
}