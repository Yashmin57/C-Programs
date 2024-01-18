#include <stdio.h>
int flag=0;
int isPrime(int n)
{
    for(int i=n/2;i>1;i--){
        if(n%i==0){
         flag=0;
            break;
        }
        else{
          flag=1;
    }
    }
    if(flag==1 || n==2){
      return 1;}
    else{
      return 0;}
    } 

int greatestPrime(int n)
{
   for(int i=n/2;i>1;i--){
       if(n%i==0 && isPrime(i)){
         n=i;
         break;
       }
        
   }return n; 
}  
 int main()
 {
   int n;
   int count=0;
   printf("Enter the value of n");
   scanf("%d",&n);
   while(n>0){
   if(isPrime(n)){
       n--;
       count++;
   }
   else if(n==1){
       n--;
       count++;
   }
  
   else{
      n= greatestPrime(n);
      count++;
       
   }
   }
   printf("%d",count);
   return 0;
 }
    
    
    
    
    
    
    
    
    


