/* 

Write a program in C to display the pattern like right angle triangle with a number.

1
12
123
1234


Input number of rows : 10                                                                                     
1                                                                                                             
12                                                                                                            
123                                                                                                           
1234                                                                                                          
12345                                                                                                         
123456                                                                                                        
1234567                                                                                                       
12345678                                                                                                      
123456789                                                                                                     
12345678910 

*/


#include <stdio.h>

int main(){


   int i,j,rows;
   scanf("%d",&rows);
   
   
   for(i=1;i<=rows;i++){
   
	for(j=1;j<=i;j++)
	   printf("%d",j);
	   
	printf("\n");
   }
}

