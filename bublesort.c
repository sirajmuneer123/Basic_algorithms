#include<stdio.h>
main()
{
	int array[100]={72,55,334,586,6,69,27,47,81};
	int i,j,temp;
	for (i=0;i<9;i++){
		for(j=0;j<9-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		
		}
	}
	for(i=0;i<9;i++)
		printf("%d  ",array[i]);

}
