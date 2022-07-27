/*

https://quera.org/problemset/51865

*/



#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    if(b == 0)
        printf("20");
        
    else if(b == 7)
        printf("%d", a);
        
    else if(a - b < 0)
        printf("0");
    
    else
        printf("%d", a-b);
        

}
