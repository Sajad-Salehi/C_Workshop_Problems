/* 



*/


#include <stdio.h>

int main()
{
    
    int n, max = 0, index = 0;
    scanf("%d", &n);
    int arr[n];
    
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    

    
    for(int i =0; i < n; i++){
        
        if(arr[i] > max){
            
            max = arr[i];
            index = i;
        }
            
    }
    
    printf("%d", index + 1);
}


