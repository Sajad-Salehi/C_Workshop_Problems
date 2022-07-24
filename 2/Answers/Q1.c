#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    if(b <= d)
        printf("exam finished!");
    
    else if(a > d)
        printf("exam did not started!");
    
    else if(c + d > b)
        printf("%d", b-d);
        
    else
        printf("%d", c);
}

