def insertionSort(a):
	for i in range(1,len(a)):
		value=a[i]
		hole=i
		while hole > 0 and a[hole-1] > value:
			a[hole]=a[hole-1]
			hole -=1
		a[hole]=value
	return a
		
print insertionSort([2,1,4,6,9,7,8])
