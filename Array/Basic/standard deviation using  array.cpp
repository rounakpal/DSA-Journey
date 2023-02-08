#include<iostream>
#include<cmath>
using namespace std;

float calculatedeviation(float arr[])
{
	float sum=0.0,mean,standarddev=0.0;
	int i;
	for(i=0;i<10;i++){
		sum += arr[i]; 
	}
	mean = sum/10;
	for(i=0;i<10;i++){
		standarddev += pow(arr[i] - mean,2);
		return sqrt(standarddev / 10);
	}
}

int main() {
	float arr[10];
	int i;
	cout << "Enter the element" << endl;
	for(i=0;i<10;++i){
		cin >> arr[i];
	}
		cout << endl <<  "Standard deviation : " << calculatedeviation(arr);
		return 0; 
	
}
