/*

https://quera.org/problemset/110015/

*/


#include <stdio.h>

int main()
{
    
    char str1[] = "#.......";
    char str2[] = ".......#";
    char str3[] = "#ghorfe";
    char str4[] = "ghorfe";
    
    int n, x;
    scanf("%d", &n);
    
    x = n;
    for(int i=0; i<8; i++){
        
        if(i%2 == 0)
            printf("########.......########\n");
        
        else{
            
            if(n == 0)
                printf("%s.......%s\n", str1, str2);
        
        
            else if(n == 1){
                n -= 1;
                printf("%s%d.......%s\n", str3, x-n, str2);
            }
            
            else {
                n -= 2;
                printf("%s%d.......%s%d#\n", str3, x-n-1, str4, x-n);
            }
        }
        
        if(i == 7)
            printf("#######################\n");
    }
    
}


