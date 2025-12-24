#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	cout.precision(6);
	cout.setf(ios::fixed);
	int i,j,k,n;
	
	cout<<"\n enter the value of n ";
	cin>>n;
	double x[n],y[n][n];
	cout<<"\n Enter the value of x :";
	for(i=0;i<n;i++)
	cin>>x[i];
	cout<<"\n enter the value of y : ";
	for(i=0;i<n;i++)
	cin>>y[i][0];
	double h,fx,p,sum,tt=1.0;
	cout<<"\n ener the vaue of x which  the value of y to be calculated \n ";
	cin>>fx;
	h=x[1]-x[0];
	p=(fx-x[0])/h;
	sum=y[0][0];
	for(j=1;j<n;j++){
		tt=tt*(p-j+1)/j;
		sum=sum+tt*y[0][j];
	}
	cout <<"y("<<fx<<")="<<sum;
	return 0;
	
}