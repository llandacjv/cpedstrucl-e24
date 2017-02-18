#include <iostream>
using namespace std;

int main() {	
	int arr[] = {40,30,20,50,10};
	int n=5, p, j, temp;
 
 	for(int i=0;i<n;i++) {
		j=i;
		while(j>0&&arr[j]<arr[j-1]) {
			  temp     = arr[j];
			  arr[j]   = arr[j-1];
			  arr[j-1] = temp;
			  j--;
		}
		p++;
    	cout<<"Pass: "<<p<<": ";
    	for(int k=0;k<n;k++)
		cout<<arr[k]<<" ";
		cout<<endl;
	}
}
