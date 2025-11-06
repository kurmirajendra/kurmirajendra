#include<stdio.h>
int linearSearch(int arr[],int val,int sz)
{
    for(int i=0;i<sz;i++)
    {
        if(arr[i]==val)
            return i;
    }
    return 0;
}
void main()
{
    int arr []={1,2,3,4,5,6,7};
    int val;
    int sz=sizeof(arr)/sizeof(int);
    printf("Enter value to find ");
    scanf("%d",&val);
    int value = linearSearch(arr,val,sz);
    if(value==0)
        printf("\nValue not Found!!");
    else
        printf("\nValue found at %d",value);
}
