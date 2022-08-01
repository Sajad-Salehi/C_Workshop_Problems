/* 

The tribonacci numbers are like the Fibonacci numbers, but instead of starting with two predetermined terms, the sequence starts with three predetermined terms and each term afterwards is the sum of the preceding three terms. The first few tribonacci numbers are:

0, 0, 1, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274, 504, 927, 1705, 3136, 5768, 10609, 19513, 35890, 66012, ...


	f(0) = 0,  f(1) = 0,  f(2) = 1,  f(3) = 1,  f(4) = 2,  ...
	Write a function for the result of f(n).

	input --> n
	output --> f(n)


Example

	input: 5
	output: 4
	
	
	input: 10
	output: 81

*/


#include <stdio.h>

int func(int n){
    
    if(n == 1 || n == 0)
        return 0;
    
    else if(n == 2)
        return 1;
    
    else
        return func(n-1) + func(n-2) + func(n-3);
}

int main()
{
    int x;
    scanf("%d", &x);
    
    int result = func(x);
    printf("%d", result);
}


