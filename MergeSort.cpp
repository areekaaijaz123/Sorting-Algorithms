#include <iostream>
using namespace std ;

template <class T>
void Merge(T array[] , int l , int m , int r){
	
	int size1 = m-l+1 ;
	int size2 = r-m ;
	
    T LArray[size1] , RArray[size2] ;
    
	for (int i=0 ; i<size1 ; i++)
	    LArray[i] = array[i+l] ;
	    
	for (int i=0 ; i<size2 ; i++)
	    RArray[i] = array[m+1+i] ;
	    
	int i = 0 , j = 0 , k = l ;
	    
	while (i<size1 && j<size2)
		if (LArray[i]<=RArray[j])
			array[k++] = LArray[i++] ;
        else
			array[k++] = RArray[j++] ;
			
    while (i<size1)
    	array[k++] = LArray[i++] ;
    	
	while (j<size2)
		array[k++] = RArray[j++] ;
	
}

static int count = 0 ;
template <class T>
void MergeSort(T array[] , int l , int r){
	count++ ;
	int m ;
	if (l<r){
		m = (r+l)/2 ;
	  
	    MergeSort(array,l,m) ;
	    MergeSort(array,m+1,r) ;
	    Merge(array,l,m,r) ;  
	}	
}

int main()
{
	int array[10] = {10,9,8,7,6,5,4,3,2,1};
	cout<<"Unsorted Array "<<endl;
	for (int i=0 ; i<10 ; i++)
	 cout<<array[i]<<" " ;
	 cout<<endl;    
	MergeSort(array,0,9) ;
	cout<<"Sorted Array "<<endl;
	for (int i=0 ; i<10 ; i++)
	 cout<<array[i]<<" " ;
	 cout<<endl; 
	cout<<"Number of calls : "<<count<<endl;
	 
	return 0 ;
}
