#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double ff(double x, double y){
	double a=-y;
	return a;
}
int main (){
	int i,n;
	double x0,y0,h,fx;
	cout.precision(5);
	cout.setf(ios::fixed);
	cout<<"\n Enter the initial condition \n";
	cout<<"\n Enter the initial value of x \n";
	cin>>x0;
	cout<<"\n enter the initial value of y \n";
	cin>>y0;
	cout<<"\n For what value of x do you want ot find the value of y \n";
	cin >>fx;
	cout <<"\n Enter the number of subdivison \n";
	cout <<"\n Please large value of n \n";
	cin>>n;
	h=(fx-x0)/n;
	double x[n],y[n];
	x[0]=x0;
	y[0]=y0;
	cout<<"  x"<<setw(10)<<"y(x)";
	cout <<"\n---------------------------\n";
	for(i=0;i<n;i++){
		y[i+1]=y[i]+h*ff(x[i],y[i]);
		x[i+1]=x[i]+h;
		cout<<x[i+1]<<setw(10)<<y[i+1]<<endl;
	}
	cout<<"y("<<x[n]<<")="<<y[n]<<endl;
	double per_err;
 per_err=(abs((exp(-fx))-y[n]))/(exp(-fx))*100;
 cout<<"Percentage error = "<<per_err<<" % "<<endl;
 return 0;
	
}
