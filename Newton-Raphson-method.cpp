#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

#define f(x,y)(sin(x)-y+0.9793)
#define g(x,y)(cos(y)-x+0.6203)
#define dfx(x,y)(cos(x))
#define dfy(x,y)(-1)
#define dgx(x,y)(-1)
#define dgy(x,y)(-sin(y))

int main(){
	cout.precision(6);
	cout.setf(ios::fixed);
	double x,x0,y,y0,d,h,k,ac;
	m:
		cin>>x0>>y0;
		cout<<"\n Enter the desied accuracy : \n "<<endl;
		cin>>ac;
		do{
			x=x0;
			y=y0;
			d=dfx(x,y)*dgy(x,y)-dgx(x,y)*dfy(x,y);
			if(d==0)
			{
				cout<<"The system does not converge for this initial guess , Please give another guess : "<<endl;
				goto  m;
				
			}
			else{
				h=(g(x,y)*dfy(x,y)-f(x,y)*dgy(x,y))/d;
				k=(f(x,y)*dgx(x,y)-g(x,y)*dfx(x,y))/d;
				x0=x+h;
				y0=y+k;
			}
		}while(fabs(x-x0)>ac || fabs(y-y0)>ac);
		cout<<"Root of the equation : x = "<<x0<<" y= "<<y0<<endl;
		return 0;
}


//Enter the initial guesses x0 and y0 respectively:
// 0.5 1.5
//Enter the desired accuracy:
// 0.001
//Root of the equation: x= 0.653683 y= 1.587414