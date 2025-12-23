#include<iostream>
#include<cmath>
using namespace std;

double ff(double x){
	double a=sin(x);
	return a;
}
int main(){
	cout.precision(6);
	cout.setf(ios::fixed);
	int n,i;
	double a,b,c,h,sum=0,integral;
	cout<<"\n Enter the interval of integration \n \n Lower limit a=";
	cin>>a;
	cout<<"\n Upper limit b=";
	cin>>b;
	cout<<"\n Please enter a number that multiple of 3 : \n\n";
	cin>>n;
	double x[n+1],y[n+1];
	h=(b-a)/n;
	for (i=0;i<=n;i++){
		x[i]=a+i*h;
		y[i]=ff(x[i]);
	}
	for(i=1;i<n;i++){
		if(i%3==0)
			sum=sum+2*y[i];
		else
			sum=sum+3*y[i];	
	}
	integral =3*h/8*(y[0]+y[n]+sum);
	cout<<"\n The definite integral is "<<integral <<endl;
	return 0;
}

// interval of integration,
// Lower limit,a= 0
// Upper limit, b= 1.5708
// Enter the no. of subintervals
// Please enter a number that is multiple of 3:
// 6
// The definite integral is 1.000063