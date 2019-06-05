#include <stdio.h>
#include <limits.h>



int max(int a, int b){
    return (a>b)? a:b;
}


int rod_cut(int p[], int n){
    int r[n];
    r[0]=0;
    int q;
    
    for(int i = 1; i<=n; i++){
        q = INT_MIN;
        for(int j = 1; j<=i ; j++){
          q = max(q, p[j-1]+r[i-j]);  
        }
        
        r[i] = q;
    }
       
    return r[n];
       
}



int main()
{
    
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("the maximum revenue is: %d", rod_cut(arr, n) );
    

    return 0;
}
