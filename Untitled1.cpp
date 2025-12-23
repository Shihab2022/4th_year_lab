#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double ff(double x){
	double a=sin(x);
	return a;
}
int main(){
	cout.precision(6);
	cout.setf(ios::fixed);
	int i,n;
	double a,b,h,sum=0,integral;
	
	cout <<"\n Enter the limit of integration \n";
	cout<<"\n Enter the heiger limit : \n";
	cin>>a;
	cout<<"\n Enter the lower limit : \n";
	cin>>b;
	cout<<"\n Enter the number of sub intervals n=";
	cin>>n;
	double x[n+1],y[n+1];
	h=(b-a)/n;
	for(i=0;i<=n;i++){
		x[i]=a+i*h;
		y[i]=ff(x[i]);
		
	}
	for(i=1;i<n;i++){
		sum=sum+y[i];
		
	}
	
	integral=h/2.0*((y[0]+y[n])+2*sum);
	cout<<"The definite integral is "<<integral<<endl;
	return 0;
	
}