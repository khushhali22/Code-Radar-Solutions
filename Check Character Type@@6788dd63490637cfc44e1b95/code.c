#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x);
    if(isdigit(x)){
        print("Digit");
    }
    else if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' ||x=='I' || x=='O'|| x=='U'){
        printf("Vowel");
    }
    else if(isalpha(x)){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}