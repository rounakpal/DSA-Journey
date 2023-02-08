#include<iostream>
using namespace std;

int main() {
	float arr[100],avg,sum=0.0;
	int i,n;
	cout << "Enter the number of element";
	cin >> n;
	while(n>100 || n<0) {
		cout << "enter the number again";
		cin >> n;
	}
	for(i=0;i<n;i++)
	{
		cout <<"Enter the element";
		cin >> arr[i];
		sum+=arr[i];
	}
	avg = sum/n;
	cout << "Average is" << avg;
	return 0;
}
