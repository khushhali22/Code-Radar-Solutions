#include <stdio.h>
int main() {
    char x[1000];
    int c=0,i=0;
    fgets(x,sizeof(x),stdin);
    // if(x[0]!=' ' && x[0]!='\0'){
    //     c=1;
    // }
    while(x[i]!='\0'){
            if (x[i] != ' ' && (i == 0 || x[i - 1] == ' ')) 
            c++;
        i++;
    }
     printf("%d",c);
    return 0;
}