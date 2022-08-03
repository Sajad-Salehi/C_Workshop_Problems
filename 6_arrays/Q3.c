/* 

https://quera.org/problemset/49028/

*/


#include <stdio.h>

int main()
{
    
    int n, result = 0;
    scanf("%d", &n);
    int arr[n];
    
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    
    int current = arr[0];
    
    
    for(int i =0; i < n; i++){
        
        if(arr[i] != current){
            
            result++;
            current = arr[i];
        }
        
    }
    
    printf("%d", result);
}
