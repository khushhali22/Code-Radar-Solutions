void isprime(int n){
    if(n<2) return;
    if(n==2) {
        printf("%d ",n);
        return ;
    }
    int f=1;
    for(int i=2 ; i<n ; i++)
      {
        if(n%i==0)
        {
            f=0;
            break;
        }
       }
       int c=0;
    if(f==1){
        printf("%d ",n);
        c++;
    }
    if(c==0){
        printf("No prime numbers");
    }
}
void printPrimesInRange(int a,int b){
    for(int i=a ; i<=b ; i++){
        isprime(i);
    }
}