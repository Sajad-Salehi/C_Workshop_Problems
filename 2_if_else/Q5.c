/*

https://quera.org/problemset/4065/

*/


#include <stdio.h>

int main() {


    int a, b, n, result;
    scanf("%d %d %d", &a, &b, &n);


    if (n % 2 == 0)
        result = n/2 * (a+b);
        
    else
        result = (n-1)/2 * (a+b) + a;


    printf("%d", result);
}

