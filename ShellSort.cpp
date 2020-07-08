#include <iostream>
using namespace std ;

template <class T>
void ShellSort(T Data[] , int Size)
{
	T temp ;
	int i , j , gap ;
	cout<<"Unsorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
	
	for (gap=Size/2 ; gap>0 ; gap/=2)
	{
		for (i=gap ; i<Size ; i++)
		{
			temp = Data[i] ;
			for (j=i-gap ; j>=0 ; j-=gap)
			{
				if (Data[j+gap] >= Data[j])
				break ;
				else {
					temp = Data[j] ;
					Data[j] = Data[j+gap] ;
					Data[j+gap] = temp ;
				}
			}
		}
	}
	
	cout<<endl<<"Sorted Data"<<endl;
	for (int i=0 ; i<Size ; i++)
	cout<<Data[i]<<" ";
}

int main()
{
	int array[9] = {1,91,55,4,5,6,43,8,9};
	ShellSort(array,9);
	return 0 ;
}
