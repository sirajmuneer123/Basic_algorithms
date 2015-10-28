// selection sort
function main()
{
	a_list=[2,1,6,7,5,4,3];
	console.log("Array before slection sort :");
	console.log(a_list);
	console.log("Array after selection sort :")
	selectionSort(a_list);
	console.log(a_list);
}
function selectionSort(a_list)
{
	for(var slot=a_list.length-1;slot>=0;slot--){
		
		max_pos=0;
		for(var j=1;j<slot+1;j++){
			if(a_list[max_pos]< a_list[j])
				max_pos=j;
		}
		temp=a_list[slot];
		a_list[slot]=a_list[max_pos];
		a_list[max_pos]=temp;
	}
}
main()
