#include <iostream>
using namespace std;

int main() {
	// For specific position
	int arr[5] = {5,3,4,5,6},pos,i;
//	cout << "Enter the pos";
//	cin >> pos;
	
//	for(i=pos;i<5;i++){
//		arr[i] = arr[i+1];
	}
	//for deleting first element 
	for(i=0;i<5;i++){
		arr[i] = arr[i+1];
	}
	for(i=0;i<4;i++){
		cout << arr[i];
	}
}
