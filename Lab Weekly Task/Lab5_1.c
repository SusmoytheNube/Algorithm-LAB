#include <stdio.h>
#include <math.h>
int main()
{
 int a[100], n, i, j, position, swap, min_idx,temp;
 printf("Enter Number of Elements :");
 scanf("%d", &n);
 printf("Enter Numbers : \n");
 for (i = 0; i < n; i++)
 {
 scanf("%d", &a[i]);
 }
 for (i = 0; i < n-1; i++)
 {
 min_idx = i;
 for (j = i+1; j < n; j++)
 {
 if (a[j] < a[min_idx])
 {
 min_idx = j;
 }
 }
 temp = a[min_idx];
 a[min_idx] = a[i];
 a[i] = temp;
 }
 printf("\nSorted Data:\n");
 for(i = 0; i < n; i++)
 {
 printf("%d ", a[i]);
 }
 int p =(int)(pow(a[1],a[n-1]));
 printf("\nResult: %d^%d = %d ",a[1],a[n-1],p);
 return 0;
}