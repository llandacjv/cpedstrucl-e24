#include <iostream>
using namespace std;
 
int main() 
{	
	int arr[] = {5,8,9,7,4};
	int n=5, swap;
 
	for(int i=n;i>1;i--) 
	{
		for(int j=0;j<n-1;j++)
   		{
			if(arr[j]>arr[j+1])
			{
				swap     = arr[j];
       			arr[j]   = arr[j+1];
       			arr[j+1] = swap;
    		}
    	}
    	
    	for(int k=0;k<n;k++)
		cout<<arr[k]<<" ";
		cout<<endl;
  	}
}
