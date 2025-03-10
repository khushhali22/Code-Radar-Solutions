int isprime(int n){
    if(n<2) return;
    if(n==2) {
        printf("%d ",n);
        return ;
    }
    for(int i=2 ; i<n ; i++)
      {
        if(n%i==0)
        {
            return 0;
        }
       }
    return 1;
}
void printPrimesInRange(int a,int b){
    int found=0;
    for(int i=a ; i<=b ; i++){
        if(isprime(i)){
            printf("%d ",i);
            found=1;
        }
    }
    if(found==0){
        printf("No prime numbers");
    }
}