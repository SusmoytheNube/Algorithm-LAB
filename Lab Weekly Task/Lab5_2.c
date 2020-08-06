#include <stdio.h>
int main()
{
 int a[1000], n, i, j, position, swap, min_idx,temp,t;
 printf("Enter Number of Elements :");
 scanf("%d", &n);
 printf("Enter Numbers of Array : ");
 for (i = 0; i < n; i++)
 {
 scanf("%d", &a[i]);
 }
 printf("t = ");
 scanf("%d", &t);
 for (i = 0; i < n-1; i++)
 {
     if(i==t) break;
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
 printf("\nAfter 2 Times Array: \n");
 for(i = 0; i < n; i++)
 {
 printf("%d ", a[i]);
 }
 return 0;
}