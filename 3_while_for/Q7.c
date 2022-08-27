/*

https://quera.org/problemset/127289

*/


#include <stdio.h>

int main()
{

    int n;
    char str[] = "codecup6";
    
    scanf("%d", &n);
    while(n > 8)
        n -= 8;
        
    printf("%c", str[n - 1]);
    
}

