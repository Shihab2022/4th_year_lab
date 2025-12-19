#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	cout << setprecision(5)<<fixed;
	int i=0,j=0,n,k=0;
	cout <<"\nEnter the number of values to be entered \n";
	cin >> n;
	double x[n],y[n][n];
	cout <<"\n Enter the value of x \n";
	for (i=0; i<n; i++)
		cin >>x[i];
	cout<<"\nEnter the values of y\n";
	for (i=0;i<n;i++)
		cin >>y[i][0];	
		
		
 double h,fx,p,sum,tt=1.0;
 cout << "\n Enter the value of x which the value of y to be calculated \n";
 cin >> fx;
 h = x[1]-x[0];
 p=(fx-x[0])/h; // p = (x - x0) / h
 sum=y[0][0];
 for (j=1;j<n ; j++){
 	tt=tt*(p-j+1)/j;
 	sum +=tt*y[0][j];
 }
 cout << "y("<<fx<<")="<<sum;
 return 0;
		
}

// Enter the number of values to be entered---5
//Enter the values of x
//0.10 0.15 0.20 0.25 0.30
//Enter the values of y
//0.1003,0.1511,0.2027,0.2553,0.3093
//Enter the value of x at which the value of y to be calculated
//0.12
//Y (0.12000) = 0.12053
