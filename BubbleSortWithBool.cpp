#include <iostream>
using namespace std ;

template <class T>
void BubbleSortBool (T Data[] , int Size){
	
	cout<<"Unsorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
	
	bool isSwapped ;
	T temp ;
	for (int i=0 ; i<Size ; i++){
		for (int j=0 ; j<Size-i-1 ; j++){
			isSwapped = false ;
			if (Data[j]>Data[j+1])
			{
				temp = Data[j] ;
				Data[j] = Data[j+1] ;
				Data[j+1] = temp ;
				isSwapped = true ;
			}
		}
	    if (!isSwapped)
	    break ;
	}
	
	cout<<endl<<"Sorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
}
int main()
{
	int array[9] = {4,3,1,8,33,2,5,6,10};
	BubbleSortBool(array,9);
	return 0 ;
}
