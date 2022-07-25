/*

https://quera.org/problemset/144028/

*/


#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d", &n);
    
    if(3 % n == 0 || 9 % n == 0 || 12 % n == 0)
        printf("YES");
    
    else
        printf("NO");
}
