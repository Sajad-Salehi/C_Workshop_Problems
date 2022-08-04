/* 

https://quera.org/problemset/9109/

*/



#include <stdio.h>
int arr[100];

int main()
{
    
    int n, x;
    scanf("%d", &n);
    
    for(int i=0; i < n; i++){
        
        scanf("%d", &x);
        arr[x] += 1;
    }
    
    int index = 1, current = 100;

    
    for(int i=1; i <= 100; i++){
        

        if(arr[i] < current && arr[i] != 0){
            
            current = arr[i];
            index = i;
        }
    }   
    
    printf("%d", index);  
}

