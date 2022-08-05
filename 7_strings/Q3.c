/**

https://leetcode.com/problems/length-of-last-word/

***/


#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    
    char str[n];
    int result = 0;
    
    gets(str);

    for(int i = 0; i < n; i++){
        
        if(str[n-i-1] == ' ')
            break;
        
        
        result++;
    }
    
    printf("%d", result);
}



