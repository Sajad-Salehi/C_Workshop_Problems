/* 

Write a recursive function that returns the sum of the first n integers. 

Example
	
	input: 5
	output: 15 (1+2+3+4+5)

*/

#include <stdio.h>

int func(int number, int i){
    
    if(i == number)
        return number;
    
    else
        return i + func(number, i+1);
    
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int x = func(n, 0);
    printf("%d", x);
}

