#include <iostream>
using namespace std ;

template <class T>
void CombSort (T Data[] , int Size){
	
	cout<<"Unsorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
	
	int step = Size ;
	int j , k ;
	T temp ;
	
	
	while ((step/=1.3)>1)
	{
		for (j=step ; j<Size ; j++)
	   {
	       k = j-step ;
	       if (Data[j]<Data[k])
	       {
	   	        temp = Data[j] ;
	   	        Data[j] = Data[k] ;
	   	        Data[k] = temp ;
	        }
	    }
	
	   cout<<endl ;
	   cout<<"Step : "<<step<<endl; 
	   for (int i=0 ; i<Size ; i++)
	   cout<<Data[i]<<" ";
	}
	
	bool isSwapped = true ;
	
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
	int array[11] = {41,11,18,7,16,25,4,23,32,31,22};
	CombSort(array,11);
	return 0 ;
}
