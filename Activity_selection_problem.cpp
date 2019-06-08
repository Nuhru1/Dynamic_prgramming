#include <stdio.h>


void activity_selection(int s[], int f[], int n){
    
    int j = 0;
    printf("%d ", j+1);
    
    for(int i = 1; i<n; i++){
      if( s[i] >= f[j]){
          printf("%d ", i+1);
          j = i;
      }
    }
    
}



int main()
{
   int s[] = {1,3,0,5,3,5,6,8,8,2,12};
    int f[] = {4,5,6,7,9,9,10,11,12,14,16};
    int n = sizeof(s) / sizeof(s[0]);
    activity_selection(s, f, n);

    return 0;
}
