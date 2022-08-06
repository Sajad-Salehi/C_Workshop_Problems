/*

https://leetcode.com/problems/day-of-the-year/

*/


#include <stdio.h>

int main()
{
    
    int n1, n2, n3, result = 0;
    scanf("%d-%d-%d", &n1, &n2, &n3);
    
    result = ((n2-1) * 30) + n3;
    printf("%d", result);
}

