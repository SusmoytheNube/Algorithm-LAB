#include<stdio.h>
int main()
{
 int i,n,key,arr[1000],a=-1;
 printf("Enter Array Size : ");
 scanf("%d",&n);
 for(i=0; i<n; i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("Enter Search key : ");
 scanf("%d",&key);
 for(i=0; i<n; i++)
 {
 if(arr[i]==key)
 {
     a=i;
 }
 }
 if(a>-1)
 {
    printf("Found at %d Position ",a);
 }
 else
 {
     printf("Not Found");
 } 
 return 0;
}
 