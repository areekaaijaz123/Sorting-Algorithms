#include <iostream>
using namespace std ;

template <class T>
void Merge(T array[] , int l , int m , int r){
    T Arr[r-l+1] ;
	    
	int i = l , j = m+1 , k = 0 ;
	
	while (i<=m && j<=r)
		if (array[i]<array[j])
		{
			Arr[k] = array[i] ;
			k++ ;
			i++ ;
		}
		else 
		{
			Arr[k] = array[j] ;
			k++ ;
			j++ ;
		}	
	while (i<=m){
		Arr[k] = array[i] ;
		i++ ;
		k++ ;
	}
	while (j<=r){
		Arr[k] = array[j] ;
		j++ ;
		k++ ;
	}
	k = 0 ;
	for (i=l ; i<=r ; i++,k++){
		array[i] = Arr[k] ;
	}
}
int Count = 0 ;
template <class T>
int MergeSort(T array[] , int l , int r){
	Count++ ;
	int m ;
	if (l<r){
		m = (r+l)/2 ;
	  
	    MergeSort(array,l,m) ;
	    MergeSort(array,m+1,r) ;
	    Merge(array,l,m,r) ;  
	}	
	return Count ;
}

int main()
{
	int array[10] = {10,9,8,7,6,5,4,3,2,1};
	cout<<"Unsorted Array "<<endl;
	for (int i=0 ; i<10 ; i++)
	 cout<<array[i]<<" " ;
	 cout<<endl;    
	cout<<"Number of calls : "<<MergeSort(array,0,9) ;
	cout<<endl<<"Sorted Array "<<endl;
	for (int i=0 ; i<10 ; i++)
	 cout<<array[i]<<" " ;
	 cout<<endl; 
	return 0 ;
}
