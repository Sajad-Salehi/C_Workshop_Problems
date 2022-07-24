#include <stdio.h>

int main()
{
    
    int n, x, temp = 0;
    scanf("%d %d", &n, &x);
    
    temp = n / x;
    
    if(n % x != 0)
    	temp++;
    	
    printf("%d", temp);
}
