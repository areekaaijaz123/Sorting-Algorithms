#include <iostream>
#include <ctime>
using namespace std ;

int Comparisions ;
template <class T>
int Partition(T Data[] , int low , int high){
	
	for (int i=low ; i<=high ; i++)
	 cout<<Data[i]<<" " ;
	cout<<endl ; 
    T pivot = Data[high] , temp ;
	int i = low-1 , j = low ;
	
	while (j<high){
		if (Data[j] <= pivot)
		{
			Comparisions++ ;
			i++ ;
			temp = Data[j] ;
			Data[j] = Data[i] ;
			Data[i] = temp ;
		}
		j++ ;
	}
	temp = Data[i+1] ;
	Data[i+1] = Data[high] ;
	Data[high] = temp ;
	return (i+1) ;
}

template <class T>
int QuickSort(T Data[] , int low , int high){

	int Pivot ;
	
	if (low < high){
		
		Pivot = Partition(Data,low,high) ;
		cout<<endl<<"Pivot : "<<Pivot<<" "<<Data[Pivot]<<endl;
	    QuickSort(Data,low,Pivot-1) ;
	    QuickSort(Data,Pivot,high) ;   
	}
	return Comparisions ;
}
int main(){
	
//	double t1 , t2 ;
	float arr[]={0.535,0.960,0.750,0.750,0.151,0.001,0.981,0.327,0.111};
	int array1[10] = {9,1,3,6,2,5,4,7,10,8} ;
	int array2[10] = {1,2,3,4,5,6,7,8,9,10} ;
	int array3[10] = {10,9,8,7,6,5,4,3,2,1} ;
	
//	for (int i=0 ; i<10 ; i++)
//	 cout<<arr[i]<<" " ;
	 
	QuickSort(arr,0,8); 
	cout<<endl<<"Sorted Array "<<endl;
	for (int i=0 ; i<10 ; i++)
	 cout<<arr[i]<<" " ;
	 cout<<endl;  
	 
/*	Comparisions = 0 ;
	cout<<endl<<endl<<"Best Case"<<endl ;
	cout<<"Unsorted Array "<<endl;
	for (int i=0 ; i<10 ; i++)
	 cout<<array2[i]<<" " ;
	t1 = clock() ; 
	cout<<endl<<"Number of Comparisions : "<<QuickSort(array2,0,9)<<endl;
	t2 = clock() ;
	cout<<"Time : "<<(t2-t1)/CLK_TCK<<"  secs"<<endl ;
	cout<<"Sorted Array "<<endl;
	for (int i=0 ; i<10 ; i++)
	 cout<<array2[i]<<" " ;
	 cout<<endl;  
	 
	Comparisions = 0 ;
	cout<<endl<<endl<<"Worst Case"<<endl ;
	cout<<"Unsorted Array "<<endl;
	for (int i=0 ; i<10 ; i++)
	 cout<<array3[i]<<" " ;
	t1 = clock() ;
	cout<<endl<<"Number of Comparisions : "<<QuickSort(array3,0,9)<<endl;
	t2 = clock() ;
	cout<<"Time : "<<(t2-t1)/CLK_TCK<<"  secs"<<endl ;
	cout<<"Sorted Array "<<endl;
	for (int i=0 ; i<10 ; i++)
	 cout<<array3[i]<<" " ;
	 cout<<endl; */ 
}
