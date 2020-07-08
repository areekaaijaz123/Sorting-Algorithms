#include <iostream>
using namespace std ;
template <class T>
void InsertionSort(T Data[] , int Size){
	
	cout<<"Unsorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
	
	int j ;
	T temp ;
	
	for (int i=1 ; i<Size ; i++)
	{
		temp = Data[i] ;
		j = i-1 ;
		while ((j>=0) && (Data[j]>temp))
		{
			Data[j+1] = Data[j] ;
			Data[j] = temp ;
			j = j-1 ;
		}
	}
	
	cout<<endl<<"Sorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
}

int main()
{
    int array[9] = {27,4,1,6,2,56,21,32,12};
	InsertionSort(array,9);
	return 0 ;
}
