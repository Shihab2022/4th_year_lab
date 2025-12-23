#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double ff(double x,double y ){
	double a =y+x*x*x*x;
	return a;
}
int main(){
	cout.precision(6);
	cout.setf(ios::fixed);
	int i,n;
	double x0,y0,h,fx;
	cout<<"\n Enter the initial condition \n";
	cout <<"\n Enter initial value of x \n";
	cin>>x0;
	cout<<"\nEnter initial value of y \n";
	cin>>y0;
	cout<<"\n For what value of x do you want to find the value of y \n";
	cin>>fx;
	cout<<"\n Enter the number of subdivision \n";
	cout<<"\n Please enter the large value of n \n";
	cin>>n;
	h=(fx-x0)/n;
	double x[n],y1[n],y[n];
	x[0]=x0;
	y[0]=y0;
	y1[0]=0;
	cout<<"  x"<<setw(10)<<" y(x)";
	cout<<"\n---------------------------\n";
	for(i=0;i<n;i++){
		y[i+1]=y[i]+h*ff(x[i],y[i]);
		x[i+1]=x[i]+h;
		 y1[i+1]=y[i]+h/2.0*(ff(x[i],y[i])+ff(x[i+1],y[i+1]));
		 cout<<x[i+1]<<setw(10)<<y1[i+1]<<endl;
		 
		
	}
	cout<<endl;
	cout<<"y("<<x[n]<<")="<<y1[n]<<endl;
	return 0;
	
	
}