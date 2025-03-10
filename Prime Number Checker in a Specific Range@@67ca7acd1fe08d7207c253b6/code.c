void isprime(int n){
    int f=1;
    if(n>2)
    {
    for(int i=2 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    }
    if(f==1){
        printf("%d ",n);
    }
    
   
}
void printPrimesInRange(int a,int b){
    for(int i=a ; i<=b ; i++){
        isprime(i);
    }
}