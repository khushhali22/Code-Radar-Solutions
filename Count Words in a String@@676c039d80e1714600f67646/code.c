#include <stdio.h>
int main() {
    char x[1000];
    int c=0,i=0;
    fgets(x,sizeof(x),stdin);
    if(x[0]!=' ' && x[0]!='\0'){
        c=1;
    }
    while(x[i]!='\0'){
            if((x[i]==' ' || x[i]=='\n' || x[i]=='\0'|| x[i]=='\t')&&( x[i+1]!=' ' && x[i+1]!='\n'))
            c++;
        i++;
    }
     printf("%d",c);
    return 0;
}