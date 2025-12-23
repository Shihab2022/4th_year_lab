#include<iostream>
#include<cmath>
using namespace std;
double f(double x){
	double a=sin(x);
	return a;
}
int main (){
	int n,i;
	double a,b,h,sum=0,integrals;
	cout <<"\n Enter the limits of integration , \n initial limit a= ";
	cin>>a;
	cout<<"Final limit b =";
	cin>>b;
	cout <<"Enter the number of subintervals n=";
	cin>>n;
	
	double x[n+1],y[n+1];
	h=(b-a)/n;
	for(i=0;i<=n;i++){
		x[i]=a+i*h;
		y[i]=f(x[i]);
	}
	
	for(i=1;i<n;i++){
		sum=sum+y[i];
	}
	integrals=(h/2.0)*((y[0]+y[n])+2.0*sum);
	cout<<"The definite integral is "<<integrals<<endl;
	return 0;
	
}