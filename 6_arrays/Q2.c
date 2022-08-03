/* 

https://quera.org/problemset/52542

*/


int main()
{
    
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for(int i =0; i < n; i++){
        
        if(arr[i] > 3)
            printf("*\n");
            
        else{
            int x = arr[i];
            while(x-- > 0)
                printf("*");
            
            printf("\n");
    
        }    
    }
}
