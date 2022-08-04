/* 

	***simple nested array problem***

https://leetcode.com/problems/transpose-matrix/


Example 
	
	input: 4 4
	       1 3 -1 -3
	       2 4 -2 -4
	       5 6 -5 -6
	       7 8 -7 -8
	       
	output:
		1 2 5 7 
		3 4 6 8 
	       -1 -2 -5 -7 
	       -3 -4 -6 -8
	       

*/


#include <stdio.h>

int main()
{
    
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    
    
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++)
            scanf("%d", &arr[j][i]);
    } 
    
    
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++)
            printf("%d ", arr[i][j]);
    
        printf("\n");
    }
}


