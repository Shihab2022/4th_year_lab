#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double ff(double x,double y){
	double a=y+x*x*x*x;
	return a;
}

int main(){
	cout.precision(6);
	cout.setf(ios::fixed);
	int i,n;
	double x0,y0,h,fx;
	cout<<"\n Enter the vlaue of x0 : \n";
	cin>>x0;
	cout<<"\n enter the value of y0 : \n";
	cin>>y0;
	cout << "enter the value of x that you want to use for y : \n";
	cin>>fx;
	cout<<"\n Enter the values of steps : \n ";
	cin>>n;
	double x[n],y[n],y1[n];
	h=(fx-x0)/n;
	x[0]=x0;
	y[0]=y0;
	y1[0]=0;
	for(i=0;i<n;i++){
		y[i+1]=y[i]+h*ff(x[i],y[i]);
		x[i+1]=x[i]+h;
		y1[i+1]=y[i]+h/2.0*(ff(x[i],y[i])+ff(x[i+1],y[i+1]));
		cout <<x[i+1]<<setw(15)<<y1[i+1]<<endl;
		
	}
	
	cout <<"y("<<x[n]<<")="<<y1[n]<<endl;
	return 0;
	
}