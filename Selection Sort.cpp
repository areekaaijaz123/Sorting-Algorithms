#include <iostream>
using namespace std ;

void SelectionSort(int Data[] , int Size)
{
	cout<<endl<<"Unsorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
	
	int maxIndex , j , temp ;
	for (int i=0 ; i<Size ; i++)
	{
		maxIndex = i ;
		j = i+1 ;
		while (j<Size)
		{   //For descending order
			if (Data[j]>Data[maxIndex])
			   maxIndex = j ;
			j++ ;
		}
		temp = Data[maxIndex] ;
		Data[maxIndex] = Data[i] ;
		Data[i] = temp ;
	}
	
	cout<<endl<<"Sorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
}


int main()
{
	int array[9] = {27,4,1,6,2,56,21,32,12};
	SelectionSort(array,9);
	return 0 ;
}
