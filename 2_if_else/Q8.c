#include <stdio.h>

int main()
{
    
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(a == 0 && b == 0)
        printf("infinite");
        
    else if(a == 0 && b != 0)
        printf("invalid");
        
    else
        printf("unique");
}

