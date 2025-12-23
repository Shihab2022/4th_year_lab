#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double ff(double x,double y){
	double a=-y;
	return a;
}
int main(){
	cout.precision(6);
	cout.setf(ios::fixed);
	int i,n;
	double x0,y0,h,fx;
	cout<<"\n Enter the interval condition \n";
	cout<<"\Enter the initail value of x :";
	cin>>x0;
	cout<<"\nEnter the initial valuer of y :";
	cin>>y0;
	cout<<"\nEnter the value of x that you wnat get the output of y :";
	
	cin>>fx;
	cout <<"\n Enter the steps of the value of n:  \n";
	cin>>n;
	double x[n],y[n];
	h=(fx-x0)/n;
	
	x[0]=x0;
	y[0]=y0;
	
	cout<<endl<<endl <<"\n----------------------------------\n";
	for(i=0;i<n;i++){
		y[i+1]=y[i]+h*ff(x[i],y[i]);
		x[i+1]=x[i]+h;
		cout <<x[i+1]<<setw(10)<<y[i+1]<<endl;
		
	}
	cout<<endl<<endl <<"\n----------------------------------\n";
	cout<<"y("<<x[n]<<")="<<y[n]<<endl;
	
	
	
	return 0;
	
}