#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main (){
	cout.precision(7);
	cout.setf(ios::fixed);
	int i,j,n;
	cout<<"\nEnter the number of values to be entered \n";
	cin>>n;
	double x[n],y[n];
	cout<<"\n enter the values of x \n";
	for(i=0;i<n;i++)
		cin>>x[i];
	cout<<"\n enter the values of y \n";
	for (i=0;i<n;i++)
		cin>>y[i];
	
	double fx,sum=0,temp;
	cout <<"\n Enter the values of x at which y to be calculated \n";
	cin >> fx;
	for (j=0;j<n;j++){
		temp=1;
		for (i=0;i<n;i++){
			if(i!=j)
			temp =temp*(fx-x[i])/(x[j]-x[i]);
		}
		sum=sum+temp*y[j];
	}
	cout << "The value of y at x = "<<fx <<"is : "<<sum <<endl;
	return 0;
	

}

//Enter the number of values to be entered
// 3
// Enter the of values of x
// 4 12 19
// Enter the of values of y
// 1 3 4
// Enter the values of x at which y to be calculated
// 7
// The value of y at x = 7.0000000 is : 1.8571429
