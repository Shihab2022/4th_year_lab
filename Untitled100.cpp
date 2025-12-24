#include<iostream>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
	int i,n,k;
	cout<<"\Enter the value of n \n";
	cin>>n;
	double x[n],y[n][n];
	cout<<"\n Enter the values of x :";
	for(i=0;i<n;i++)
		cin>>x[i];
	cout<<"Enter the value of y \n";
	for(i=0;i<n;i++)
		cin>>y[i][0];
	double h,fx,p,sum=0.0,temp=1.0;
	cout<<"\n Enter the value of x that you want to for y : \n";
	cin>>fx;
	h=x[1]-x[0];
	p=(fx-x[n-1])/h;
	sum=y[n-1][0];
	for(i=1;i<n;i++){
		temp=temp*(p+i-1)/i;
		sum=sum+temp*y[n-1][i];
	}
	cout<<sum;
	
}