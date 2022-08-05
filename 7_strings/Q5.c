/**

https://leetcode.com/problems/detect-capital/

***/


#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d\n", &n);
    
    char str[n];
    gets(str);


    for(int i = 0; i < n; i++){
        
        if(str[i] > 90){
        
            printf("False");
            return;
        }
    }
        
    printf("True");
}



