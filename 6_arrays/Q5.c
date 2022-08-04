/* 

https://quera.org/problemset/2534/

*/



#include <stdio.h>

int main()
{
    
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0; i < n; i++){
        
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    int result = 0;
    int x = sum / n;
    
    for(int j =0; j < n; j++){
        
        if(arr[j] < x)
            result += x - arr[j];
    }
   
   printf("%d", result);
}

