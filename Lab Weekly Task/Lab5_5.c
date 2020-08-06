#include <stdio.h>
int partitions(int A[], int low, int high)
{
 int pivot, i, j, t;
 pivot = A[high];
 for(i = low - 1, j = low; j < high; j++)
 {
 if(A[j] < pivot)
 {
 i += 1;
 t = A[i];
 A[i] = A[j];
 A[j] = t;
 }
 }
 t = A[i+1];
 A[i+1] = A[high];
 A[high] = t;
 return i+1;
}
void quick_sort(int A[], int low, int high)
{
 if(low >= high)
 {
 return;
 }
 int p;
 p = partitions(A,low,high);
 quick_sort(A,low,p-1);
 quick_sort(A,p+1,high);
}
int main ()
{
 int x, A[100],t,k;
 
 printf("Test Case : ");
 scanf("%d", &t);
 for(k=0; k<t; k++)
 {
 printf("Array Size : ");
 scanf("%d", &x);
 printf("Input Array : ");
 for(int i = 0; i < x; i++)
 {
 scanf("%d", &A[i]);
 }
 quick_sort(A,0,x-1);
 printf("Sorted Data: ");
 for(int i = 0; i < x; i++)
 {
 printf("%d ", A[i]);
 }
 printf("\n\n");
 }
 return 0;
}