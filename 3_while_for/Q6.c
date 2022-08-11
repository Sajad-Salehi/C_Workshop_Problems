/*

https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/

*/


#include <stdio.h>
int main(){
	
	int l,w,h,n;
	scanf("%d\n%d", &l, &n); 

	
	for(int i=1; i<=n; i++){     
		
		scanf("%d%d", &w, &h);  
		
		if(w>=l && h>=l){     
		    
			if(w == h)         
				printf("ACCEPTED\n");  
			else 
				printf("CROP IT\n");     
		}
		
		else 
			printf("UPLOAD ANOTHER\n"); 
	}
