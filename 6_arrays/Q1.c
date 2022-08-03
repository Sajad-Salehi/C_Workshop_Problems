/* 

https://leetcode.com/problems/missing-number/


Example
------------------------------------------
	
	input: 8
	       1 3 0 5 8 6 2 7    
	       
	output: 4
	
------------------------------------------
	
	inout: 3
	       2 0 3
	
	output: 1

------------------------------------------

*/


#include <stdio.h>

int main()
{
    
    int n, x = 0;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        
        scanf("%d", &x);
        arr[x] = x;
    }
    
        
    for(int j = n; j >= 0; j--){
        
        if(arr[j] == j)
            continue;
        
        printf("%d", j);
    }
}
