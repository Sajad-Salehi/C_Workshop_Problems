/* 

https://leetcode.com/problems/number-of-1-bits/

0 < n < 10^20

*/


#include <stdio.h>

int main()
{
    unsigned long long int n;
    int result = 0;
    
    scanf("%llu", &n);


    while(n > 0){
        
        int x = n % 10;
        n /= 10;

        if(x == 1)
            result += 1;
        
    }
    
    printf("%d", result);
}

