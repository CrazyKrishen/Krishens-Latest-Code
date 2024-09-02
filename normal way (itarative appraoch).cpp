//normal way (itarative appraoch)
//Binary search

#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int low, int high)
{
	while(low<=high)
	{
		int mid= (low+high)/2;
		
		if(arr[mid]==target)
		{
			return mid;
		}
		if(arr[mid]<target)
		{
			return mid+1;
		}
		else
		{
			return mid -1;
		}
	}
	
	return -1; //element not found
	
	
	
}

int main()
{
	int sortedArray[]={10,20,30,40,50,60,70,80,90,100};
	
	int targetP = 70;  //number we are searching for 
	
	
	//sizeof(sortedArray) gives you the total size of the array in bytes
	//sizeof(sortedArray[0]) gives you the total size of one element of the array in bytes
	//dividing the total size by the size of one element gives you the number of elements in the array 
	
	int arraySize= sizeof(sortedArray)   /sizeof(sortedArray[0]);  //getting the size of the array
	
	
	
	int result= binarySearch(sortedArray, targetP, 0, arraySize-1);
	
	
	if(result ==-1)
	{
		cout <<"The number (target) was not found in the array! "<<'\n';
	}
	else
	{
		cout <<targetP<<" is found in position "<<result<<" of the array."<<'\n';
	}
	
	
	return 0;
}
