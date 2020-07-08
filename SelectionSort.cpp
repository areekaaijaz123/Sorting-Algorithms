#include <iostream>
using namespace std ;

template <class T>
void SelectionSort(T Data[] , int Size){
	
	cout<<"Unsorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
	
	T temp ;
	int j , MinIndex ;
	
	for (int i=0 ; i<Size ; i++)
	{ 
		MinIndex = i ;
		for (int j=i+1 ; j<Size ; j++)
		{
			if (Data[j]<Data[MinIndex])
		    {   
			  MinIndex = j ;
		    }
		}
		temp = Data[i] ;
		Data[i] = Data[MinIndex] ;
		Data[MinIndex] = temp ;
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
