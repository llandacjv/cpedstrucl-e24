#include <iostream>
using namespace std;
 
int main() {	
	int arr[] = {35,10,55,20,5};
	int n=5, p, swap;
 
	for(int i=n;i>1;i--) {
		for(int j=0;j<n-1;j++) {
			if(arr[j]>arr[j+1]) {
			swap     = arr[j];
       			arr[j]   = arr[j+1];
       			arr[j+1] = swap;
    		}
    	}
    	p++;
    	cout<<"Pass: "<<p<<": ";
    	for(int k=0;k<n;k++)
		cout<<arr[k]<<" ";
		cout<<endl;
  	}
}
