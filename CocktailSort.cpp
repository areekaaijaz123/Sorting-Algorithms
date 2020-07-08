#include <iostream>
using namespace std ;

template <class T>
void CocktailSort (T Data[] , int Size){
	
	cout<<"Unsorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";

	bool isSwapped = true ;
	T temp ;
	for (int i=0 ; i<Size && isSwapped ; i++){
		
		for (int j=i ; j<Size-i-1 ; j++){
			
			isSwapped = false ;
			if (Data[j]>Data[j+1])
			{
				temp = Data[j] ;
				Data[j] = Data[j+1] ;
				Data[j+1] = temp ;
				isSwapped = true ;
			}
		}
	    
	    for (int j=Size-i-2 ; j>=i ; j--){
	    	
	    	isSwapped = false ;
	    	if (Data[j]>Data[j+1])
	    	{
	    		temp = Data[j] ;
				Data[j] = Data[j+1] ;
				Data[j+1] = temp ;
				isSwapped = true ;
			}
		}
	}
	
	cout<<endl<<"Sorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
}

int main()
{
	int array[15] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	CocktailSort(array,15);
	return 0 ;
}
