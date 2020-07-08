#include <iostream>
using namespace std ;

template <class T>
void BubbleSort (T Data[] , int Size){
	
	cout<<"Unsorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
	
	T temp ;
	
	for (int i=0 ; i<Size ; i++){
		for (int j=i ; j<Size-i-1 ; j++){
			if (Data[j]>Data[j+1])
			{
				temp = Data[j] ;
				Data[j] = Data[j+1] ;
				Data[j+1] = temp ;
			}
		}
	}
	
	cout<<endl<<"Sorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
}
int main()
{
	int array[15] = {4,3,1,8,33,2,5,6,10,11,32,12,43,21,15};
	BubbleSort(array,15);
	return 0 ;
}
