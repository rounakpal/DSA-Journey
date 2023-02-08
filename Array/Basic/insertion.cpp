#include <iostream>
using namespace std;

int main () {
	int arr[100] = {3,2,5,7,8};
	int pos,num,i;
	cout<< " enter the pos and number";
	cin >> pos >> num;
	for(i=4;i>=pos;i--){
		arr[i+1] = arr[i];
		arr[pos] = num;
	cout << "New Array";
}
	for(i=0;i<6;i++){
		cout << arr[i] << " ";
	}
	
}
