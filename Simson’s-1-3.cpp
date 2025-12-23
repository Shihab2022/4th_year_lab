#include<iostream>
#include<cmath>
using namespace std;
double f(double x){
	double a =sin(x);
	return a;
}
int main (){
	cout.precision(5);
	cout.setf(ios::fixed);
	int n,i;
	double a,b,h,sum=0,integral;
	cout<<"\n Enter the interval of integration \n \n Lower limit a=";
	cin>>a;
	cout<<"\n Enter the upper limit \n";
	cin>>b;
	cout<<"\n Enter the no of sun intervals \n\n";
	cout<<"\n Please enter a number that is of 2 :";
	cin>>n;
	double x[n+1],y[n+1];
	h=(b-a)/n;
	for(i=0;i<=n;i++){
		x[i]=a+i*h;
		y[i]=f(x[i]);
		
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

//the interval of integration,
// Lower limit a= 0
// Upper limit, b=1.5708
// Enter the no. of subintervals
// Please enter a number that is multiple of 2: 6
// The definite integral is 1.00003