/* 

https://leetcode.com/problems/power-of-two/

*/

#include <stdio.h>

int main()
{
    int n;
    int temp = 1;
    
    scanf("%d", &n);

    while(1){
        
        if(temp == n){
            printf("True");
            break;
        }
            
        
        else if(temp > n){
            printf("False");
            break;
        }
            
            
        else
            temp *= 2;
    }
    
}
