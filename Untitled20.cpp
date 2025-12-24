#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	cout.precision(6);
	cout.setf(ios::fixed);

	int i,j,n,k;
	cout<<"\n enter the value of n : \n";
	cin>>n;
	double x[n],y[n][n];
	cout<<"\nEnter the value of x \n";
	for(i=0;i<n;i++)
		cin>>x[i];
	cout<<"\n Enter the value of y \n ";
	for(i=0;i<n;i++)
		cin>>y[i][0];
	double h,p,fx,sum,temp=1.0;
	cout<<"\n Enter the value of x at which value of y to be calculate \n";
	cin>>fx;
	h=x[1]-x[0];
	p=(fx-x[n-1])/h;
	for(j=1;j<n;j++){
		temp=temp*(p+j-1)/j;
		sum=sum+temp*y[n-1][j];
	}
	cout<<"\n The value of y at x =38 is \n \n";
	cout<<"y("<<fx<<")="<<sum;
	return 0;
}