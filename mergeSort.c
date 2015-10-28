/*   merge sorting.........*/
#include<stdio.h>
#include<stdlib.h>
void printArray(int a[],int limit);
void mergeSort(int arr[],int l,int r);
void merge(int arr[],int l,int mid,int r);
main()
{
	int arr[] = {1,7,5,3,2};
    	int limit = sizeof(arr)/sizeof(arr[0]);
	printf("\nArray before sorting. ");
	printArray(arr,limit);
	mergeSort(arr,0,limit-1);
	printf("\nArray after sorting. ");
	printArray(arr,limit);
	printf("\n\n");
	
}
void merge(int arr[],int l,int mid,int r)
{
	int i,j,k;
	int n1=mid-l+1;
	int n2=r-mid;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=arr[l+i];
	for(j=0;j<n2;j++)
		R[j]=arr[mid+1+j];
	i = 0;
        j = 0;
        k = l;
        while (i < n1 && j < n2)
        {
        	if (L[i] <= R[j])
    		{
           		 arr[k] = L[i];
           		 i++;
        	}else{
            		arr[k] = R[j];
            		j++;
        	}
        	k++;
    	}
 
    /* Copy the remaining elements of L[], if there are any */
    	while (i < n1)
    	{
        	arr[k] = L[i];
        	i++;
        	k++;
    	}
 
    /* Copy the remaining elements of R[], if there are any */
    	while (j < n2)
    	{
        	arr[k] = R[j];
        	j++;
        	k++;
    	}
}
void printArray(int a[],int limit)
{
	int i;
	for(i=0;i<limit;i++)
		printf("%d ",a[i]);
}
void mergeSort(int arr[],int l,int r)
{
	int mid;
	if(l < r){
		mid=(l+r)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
		
	
	}
}
