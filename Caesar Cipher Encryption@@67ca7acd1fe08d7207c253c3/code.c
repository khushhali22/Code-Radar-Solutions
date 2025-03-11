void caesarCipher(char message[],int shift, char encrypted[]){
    int i=0;
    for(i=0 ; message[i]!='\0' ; i++){
        char ch=message[i];
        if(ch>='A'&& ch<='Z'){
            encrypted[i]=((ch-'A'+shift)%26)+'A';
        }
        else if(ch>='a'  && ch<='z'){
            encrypted[i]=((ch+shift)%26);
        }
        else{
            encrypted[i]=ch;
        }
    }
    encrypted[i]='\0';
    }
