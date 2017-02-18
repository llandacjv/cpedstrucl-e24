#include <iostream>
using namespace std;
 
int main() 
{	
	int arr[] = {8,10,6,4,2};
	int n=5, swap;
 
	for(int i=0;i<n;i++) 
	{
		int min=arr[i], index=i;
		for(int j=i+1;j<n;j++)
   		{
			if(arr[j]<min)
			{
				min   = arr[j];
       			index = j;
    		}
    	}
    	arr[index] = arr[i];
    	arr[i] = min;
    	
    	for(int k=0;k<n;k++)
		cout<<arr[k]<<" ";
		cout<<endl;
  	}
}
