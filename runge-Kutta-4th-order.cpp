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
	h=(fx-x0)/n;
	double x[n],y[n];
		x[0]=x0;
		y[0]=y0;
		cout<<" x"<<setw(10)<<"y(x)";
		cout<<"\n------------------------\n";

for(i=0;i<n;i++){
	k1=h*f(x[i],y[i]);
	k2=h*f(x[i]+h/2.0,y[i]+k1/2.0);
	k3=h*f(x[i]+h/2.0,y[i]+k2/2.0);
	k4=h*f(x[i]+h,y[i]+k3);
	y[i+1]=y[i]+(1/6.0)*(k1+2*k2+2*k3+k4);
	x[i+1]=x[i]+h;
	cout<<x[i+1]<<setw(10)<<y[i+1]<<endl;
}
cout<<"\n\n the approximate value of y at x="<<x[n]<<" is="<<y[n]<<endl;

	return 0 ;
}