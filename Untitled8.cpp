#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double ff(double x,double y){
	double a=y-x;
	return a;
}

int main(){
	cout.precision(6);
	cout.setf(ios::fixed);
	int i,n;
	double k1,k2,k3,k4,h,x0,y0,fx;
	cout<<"\n Enter initial value of x that is x0 :\n";
	cin>>x0;
	cout<<"\n Enter initial value of y that is y0 : \n ";
	cin>>y0;
	cout <<"\n Enter the value x that you want to calclualted y \n";
	cin >>fx;
	cout<<"\n Enter the value of n ";
	cin>>n;
	
	h=(fx-x0)/n;
	double x[n],y[n];
	 x[0]=x0;
	 y[0]=y0;
	
	cout <<" x "<<setw(10)<<" y ";
	for(i=0;i<n;i++){
		k1=h*ff(x[i],y[i]);
		k2=h*ff((x[i]+h/2.0),(y[i]+k1/2.0));
		k3=h*ff((x[i]+h/2.0),(y[i]+k2/2.0));
		k4=h*ff(x[i]+h,y[i]+k3);
		
		y[i+1]=y[i]+h/6.0*(k1+2*k2+2*k3+k4);
		x[i+1]=x[i]+h;
		cout<<x[i+1]<<setw(10)<<y[i+1]<<endl;
		
	} 
	
	cout <<"\n The approxiamtion value of x "<<x[n]<<" is="<<setw(4)<<y[n];
	return 0;
	}
