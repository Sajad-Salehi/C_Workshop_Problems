/**

https://leetcode.com/problems/add-strings/

***/


#include <stdio.h>

int main()
{
    
    int n1, n2;
    int num1 = 0, num2 = 0;
    scanf("%d %d\n", &n1, &n2);
    
    char str1[n1];
    char str2[n2];
    gets(str1);
    gets(str2);
    

    for(int i=0; i<n1; i++)
        num1 += pow(10, n1-i-1) *(str1[i] - 48);
    
    for(int i=0; i<n2; i++)
        num2 += pow(10, n2-i-1) *(str2[i] - 48);
    
    int result = num1 + num2;
    printf("%d", result);
}



