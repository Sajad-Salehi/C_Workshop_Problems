/* 

Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

Example: 
input: 5
output: 12345

1+11+111+1111+11111 = 12345

*/

#include <stdio.h>

int main()
{
    int n,i; 
    long int sum=0;
    long int t=1;
      
    scanf("%d",&n);
  
    for(i=1;i<=n;i++){
        
     sum=sum+t;
     t=(t*10)+1;
    }
    
    printf("%ld",sum);
}
