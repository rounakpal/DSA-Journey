#include<iostream>
using namespace std;

int main () {
	int a[10][10],b[10][10],mul[10][10],r1,r2,c1,c2,i,j,k;
	cout << "enter the row and column for first matrix";
	cin >> r1 >> c1;
	cout << "enter the row and column for second  matrix";
	cin >> r2 >> c2;
	while (c1!=r2){
		cout << "Enter the value again";
		cout << "enter the row and column for first matrix";
    	cin >> r1 >> c1;
	    cout << "enter the row and column for second  matrix";
	    cin >> r2 >> c2;
	}
	//Storing first matrix value
	cout << endl << "Enter the elements of matrix1 : " << endl;
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			cout << "Enter Element of a" << i+1 << j+1 << ":";
			cin >> a[i][j];
		}
	}
	//Storing second  matrix value
	cout << endl << "Enter the elements of matrix2 : " << endl;
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			cout << "Enter Element of b" << i+1 << j+1 << ":";
			cin >> b[i][j];
		}
	}
	// Intialization of mul 
		for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			mul[i][j] = 0;
		}
	}
	//Multiplication  element of matrix 
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			for(k=0;k<c1;k++){
				mul[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	// Displaying the multi of two matrix 
	cout << endl << "Output matrix :" << endl;
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
		cout << " " <<mul[i][j];
		if(j==c2-1)
		 cout << endl;
		}
		return 0;
	}
	
	
}
