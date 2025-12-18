#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define f(x,y)(y-x)
int main (){
	int n,i;
	double x0,y0,h,fx,k1,k2,k3,k4;
	cout.precision(7);
	cout.setf(ios::fixed);
	cout<<"\n Enter the initial condition \n";
	cout <<"\Enter the initial value of x \n";
	cin>>x0;
	cout<<"\nEnter the initial value of y \n";
	cin>>y0;
	cout<<"\n For what value of x do you want to find the value of y \n";
	cin>>fx;
	cout<<"\n Enter the number of subdivisions \n";
	cin>>n;
	
	cout <<"all value is taken ";
	return 0 ;
}