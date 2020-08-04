#include<stdio.h>
int main()
{
 int i,n,key,arr[1000],a;
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
 if(a!=NULL)
 {
    printf("Last Occurrence = %d",a);
 }
 else
 {
     printf("Item not found");
 } 
 return 0;
}
 