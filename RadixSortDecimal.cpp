#include <iostream>
#include <queue>
using namespace std ;

template <class T>
void RadixSortDecimal(T Data[] , int Size){
	
	int d , j , k , factor ;
	int radix = 10 , digits = 10 ;
	queue<int> queues[radix] ;
	
	for (d=0 , factor=1 ; d<digits ; factor*=radix , d++)
	{
		for (j=0 ; j<Size ; j++)
		  queues[(Data[j]/factor)%radix].push(Data[j]) ;
		  
		for (j=k=0 ; j<radix ; j++)
		 while (!queues[j].empty())
		 {
		 	Data[k++] = queues[j].front() ;
		 	queues[j].pop() ;
		 }
    }
}

int main(){
	int array[9] = {4,3,1,8,33,2,5,6,10};
	cout<<"Unsorted Array"<<endl;
	for (int i=0 ; i<9 ; i++)
	 cout<<array[i]<<" " ;
	 cout<<endl; 
	RadixSortDecimal(array,9) ;
	cout<<"Sorted Array"<<endl;
	for (int i=0 ; i<9 ; i++)
	 cout<<array[i]<<" " ;
	 cout<<endl; 
}
