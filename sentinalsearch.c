#include<stdio.h>
void sentinalSearch(int arr[],int sz,int key)
{
    int last=arr[sz-1];
    arr[sz-1]=key;
    int i=0;
    while(arr[i]!=key)
        i++;
    arr[sz-1]=last;
    if((i<sz-1)||(arr[sz-1]==key))
        printf("\nValue is present at index %d",i);
    else
        printf("\nValue not Found!! ");}
void main()
{
    int arr[]={2,5,6,3,7,8};
    int key,sz;
    sz=sizeof(arr)/sizeof(int);
    printf("\nEnter value to find ");
    scanf("%d",&key);
    sentinalSearch(arr,sz,key);
}
