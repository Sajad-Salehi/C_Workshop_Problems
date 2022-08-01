/* 

Write a function which implements the Pascal's triangle:
input: row, column, 0 <= row, column  


	col:    0      1     2     3      4     5
-----------------------------------------------------------
row = 0		1

row = 1     	1     1

row = 2 	1     2     1

row = 3		1     3     3     1

row = 4		1     4     6     4      1

row = 5		1     5     10    10     5    1
-----------------------------------------------------------



Example
	
	input: 5 2
	output: 10
	
	
	input: 4 2
	output: 6

*/



#include <stdio.h>

int func(int i, int j){
    
    if(i == j || j == 0)
        return 1;
    
    else
        return func(i-1, j) + func(i-1, j-1);
    
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    
    int result = func(x, y);
    printf("%d", result);
}





