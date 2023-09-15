#include<stdio.h>
void binary_search(int[],int,int,int);
void main()
{
int i,n,arr[20],key;
printf("enter the no of elements in the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("arr[%d]=",i);
scanf("%d",&arr[i]);
}
printf("\n enter the key to search:");
scanf("%d",&key);
binary_search(arr,0,n,key);
}
void binary_search (int arr[],int low,int high,int key)
{
int mid;
if(low>high)
{
printf("\n key not found");
return ;
}
mid=(low+high)/2;
if(arr[mid]==key)
printf("\n key found");
else if (arr[mid]>key)
binary_search(arr,low,mid-1,key);
else
binary_search(arr,mid+1,high,key);
}

