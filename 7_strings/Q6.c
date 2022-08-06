/*


https://quera.org/problemset/7998/


*/


#include <stdio.h>
int main()
{
    
    int n;
    int counter = 0;
    int current = -1;
    scanf("%d", &n);
    
    char str[5];
    char result[n];
    
    
    while(counter != n) {
        
        scanf("\n%s", &str);
        
        if(str[0] == 'C'){
            
            current *= -1;
            n--;
        }
            
        else if(current == 1){
            
            result[counter] = str[0] - 32;
            counter++;
        }
        
        else {
            
            result[counter] = str[0];
            counter++;
        }
    } 
    printf("%s", result);
}

