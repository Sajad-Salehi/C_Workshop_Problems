/*

https://leetcode.com/problems/reverse-string/


Example
	
	input:	 5
		 salam
	
	output:  malas
	
       	---------------
	
	inout:   6
		 hello
	
	output: olleh


*/


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    char str[n];
    char result[n];
    scanf("%s", &str);
    
    for(int i = n -1; i >= 0; i--){
        
        result[n - i -1] = str[i];
    }
    
    printf("%s", result);
}
