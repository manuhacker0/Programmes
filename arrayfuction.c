#include "stdio.h"
void main() {
    int a[10], n = 5;
   for (size_t i = 0; i < n; i++)
   {
       scanf("%d", &a[i]);
   }
   sort(a,n);
   for (size_t i = 0; i < n; i++)
   {
       printf("%d\n", a[i]);
   }
   

   return 0;
}
int sort(int *b,int n)
{
    int temp;
    for (size_t i = 0; i < n; i++)
    {
        if (b[i]>b[i+1])
        {
            temp = b[i];
            b[i] = b[i + 1];
            b[i+1] = temp;
        }
        
    }
    
}