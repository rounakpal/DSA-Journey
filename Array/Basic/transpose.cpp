#include<iostream>
using namespace std;

int main () {
	int a[100][100],transpose[100][100],r,c,i,j;
	cout << "Enter the row and column of array" << endl; 
	cin >> r >> c;
	// storing matrix
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			cout<< "Enter the element of a" << i+1 <<j+1 << ":";
			cin>> a[i][j];
		}
	}
	// printing that matrix
	cout << "Enter the matrix :" << endl;
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			cout<< "" << a[i][j];
			if(j == c-1){
				cout<< endl <<endl;
			}			
		}
    }
    //computing transpose
    for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			transpose[j][i] = a[i][j];
		}
	}
	//Printing of Transpose
	cout << "Enter the transpose  :" << endl;
	for (i=0;i<r;i++)
		for (j=0;j<c;j++){
			cout<< "" << transpose[j][i];
			if(j == r-1)
				cout<< endl <<endl;
						
		}
    return 0; 
}
