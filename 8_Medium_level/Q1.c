/*

https://quera.org/problemset/102261

*/



#include <stdio.h>

int main()
{
    
    int count = 0;
    int n, x, y;
    int result[100];
    
    scanf("%d\n", &n);
    
    for(int j=0; j<n; j++){
        
        scanf("%d\n%d", &x, &y);
        
        for(int i=1; ;i++){
            
            if(i*i >= x && i*i <= y)
                count++;
            
            if(i*i > y)
                break;
        }
        result[j] = count;
        count = 0;
    }
    
    for(int k=0; k<n; k++){
        
        printf("%d\n", result[k]);
    }
        
    
}


