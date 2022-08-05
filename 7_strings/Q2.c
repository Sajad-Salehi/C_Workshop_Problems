/**

https://leetcode.com/problems/roman-to-integer/

***/


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    char str[n];
    int result = 0;
    scanf("%s", &str);
    
    for(int i = 0; i < n; i++){
        
        if(str[i] == 'I')
            result += 1;
        
        else if(str[i] == 'V')
            result += 5;
        
        else if(str[i] == 'X')
            result += 10;
            
        else if(str[i] == 'L')
            result += 50;
            
        else if(str[i] == 'C')
            result += 100;
            
        else if(str[i] == 'D')
            result += 500;
            
        else if(str[i] == 'M')
            result += 1000;
        
        //............
    }
    
    printf("%d", result);
}

