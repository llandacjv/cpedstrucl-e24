// Merge sort without recursion
#include <iostream>
using namespace std;

int main() {	
	int arr[] = {6,5,3,1,8,7,2,4}, temp[100];
	int n=8, i, j, k, l1, l2, h1, h2, size, p=0;
	
	cout<<"Array: ";
	for(int k=0;k<n;k++) {
		cout<<arr[k]<<" ";
 	}
 	cout<<endl<<endl;
 	for(size=1;size<n;size=size*2) {
		l1=0;
		k=0;
		p++;
		while(l1+size<n) {
			h1=l1+size-1;
			l2=h1+1;
			h2=l2+size-1;
			if(h2>=n)
				h2=n-1;
			i=l1;
			j=l2;
			while(i<=h1&&j<=h2) {
				if(arr[i]<=arr[j])
					temp[k++]=arr[i++];
				else
					temp[k++]=arr[j++];
			}
			while(i<=h1)
					temp[k++]=arr[i++];
			while(j<=h2)
					temp[k++]=arr[j++];
			l1=h2+1;
		}
		for(i=l1;k<n;i++)
			temp[k++]=arr[i];
		for(i=0;i<n;i++)
			arr[i]=temp[i];
			cout<<"Pass "<<p<<": ";
		for(int k=0;k<n;k++)
		cout<<arr[k]<<" ";
		cout<<endl;
	}
}
