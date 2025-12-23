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
	
	double a ,b ,h, sum=0.0,integrals;
	
	cout<<"\n Enter the higher and lower integration limit \n";
	cout<<"\n Enter the lower limit a= ";
	cin>>a;
	cout<<" \n Enter the upper limit b= ";
	cin>>b;
	cout<<"\n Enter the value of n = \n";
	cin>>n;
	
	h=(b-a)/n;
	double x[n+1],y[n+1];
	for(i=0;i<=n;i++){
		x[i]=a+i*h;
		y[i]=ff(x[i]);
	}
	for(i=0;i<n;i++){
		if(i%3==0){
			sum=sum+2*y[i];
		}
		else{
			sum=sum+3*y[i];
		}
	}
	
	integrals=((3*h)/8.0)*(y[0]+y[n]+sum);
		cout<<"\n The definite integral is "<<integrals<<endl<<endl;
	return 0;
}