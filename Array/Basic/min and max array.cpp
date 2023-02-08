#include<iostream>
using namespace std;

int main() {
	int arr[5] = {10,4,7,8,9},max = arr[0],i;
	// for maximum element 
	for(i=1;i<5;++i){
		if(max < arr[i])
			max = arr[i] ;
		}
		cout << "largest element" <<" "<<  max << endl;
     // for minimum element 
	for(i=1;i<5;++i){
		if(max > arr[i])
			max = arr[i] ;
		}
	cout << "Smallest number" << " " <<  max  << endl;
	return 0;
		
}
