#include <iostream>
using namespace std ;

template <class T>
void CountSort(T Data[] , int Size){

	cout<<"Unsorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
	
	T Largest = Data[0] ;
	
	for (int i=1 ; i<Size ; i++)
	  if (Largest<Data[i])
	     Largest = Data[i] ;
	
	T *Count = new T[Largest+1];
	T *Temp = new T[Size] ;
	
	for (int i=0 ; i<=Largest ; i++)
	  Count[i] = 0 ;
	  
	for (int i=0 ; i<Size ; i++)
	  Count[Data[i]]++ ;
	  
	for (int i=1 ; i<=Largest ; i++)
	  Count[i] = Count[i]+Count[i-1] ;
	  
	for (int i=Size-1 ; i>=0 ; i--){
		  Temp[Count[Data[i]]-1] = Data[i] ;  
		  Count[Data[i]]-- ;
	}      
	
	for (int i=0 ; i<Size ; i++)
	  Data[i] = Temp[i] ;

	cout<<endl<<"Sorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
}

int main()
{
	
	int array[9] = {27,4,1,6,2,56,21,32,12};
	CountSort(array,9);
	return 0 ;
}
