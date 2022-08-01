/* 

Think of a recursive version of the function f(n) = 3 * n, i.e. the multiples of 3

Example:
	
	input: 4
	output: 036912
	
	input: 3
	output: 0369

*/


#include <stdio.h>

void func(int number, int i){
    
    if(i == number)
        printf("%d", i * 3);
    
    else{
        
        printf("%d", i * 3);
        func(number, i+1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    
    func(n, 0);
}

