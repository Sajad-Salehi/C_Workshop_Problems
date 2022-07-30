/* 

https://quera.org/problemset/49535

*/

#include <stdio.h>

int main()
{
    
    int k, n, result = 0;
    scanf("%d %d", &n, &k);
    
    for(int i=0; i<n; i++){
        
        int x;
        scanf("\n%d", &x);
        
        result += x;
    }

    if(result >= k)
        printf("YES");
        
    else
        printf("NO");
}

