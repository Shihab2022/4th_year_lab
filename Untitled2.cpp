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
	
	cout <<"\n Enter the limit of the integrals \n";
	cout<<"\n Enter the lower limit \n";
	cin>>a;
	cout<<"\n Enter the upper limit \n";
	cin>>b;
	cout<<"\n Enter the number of sub intervals n=";
	cin>>n;
	h=(b-a)/n;
	double x[n+1],y[n+1];
	
	for(i=0;i<=n;i++){
		x[i]=a+i*h;
		y[i]=ff(x[i]);
	}
	
	for(i=1;i<n;i+=2){
		sum=sum+4.0*y[i];
	}
	for(i=2;i<n;i+=2){
		sum=sum+2.0*y[i];
	}
	integral=h/3.0*(y[0]+y[n]+sum);
	cout<<"\n The definite integral is "<<integral<<endl<<endl;
	return 0;
}