#include<iostream>
#include<iomanip>
using namespace std;
int main (){
cout<<setprecision(5)<<fixed;
int i=0,j=0,n,k=0;
cout <<"\n Enter the number of values to be entered  \n";
cin>>n;
double x[n],y[n][n];
cout <<"\Enter the values of x \n";
for (i=0;i<n;i++)
cin>>x[i];
cout<<"\n Enter the values of y \n";
for (i=0;i<n;i++)	
cin>>y[i][0];

// this is the code for showing the forward  table ,
//for (j=1;j<n;j+{
//	k++;
//	for(i=k;i<n;i++){
//		y[i][j]=y[i][j-1]-y[i-1][j-1];
//	}
//}
//cout<<"\n The Backward Difference Table is as follows :\n\n";
//cout <<"x"<<setw(15)<<"y"<<setw(15);
//for (i=1;i<n;i++)
//cout <<"y"<<i<<setw(15);
//cout <<"\n------------------------------------------------\n";+)
//for (i=0;i<n;i++){
//	cout <<x[i]<<setw(15);
//	for (j=0;j<=i;j++){
//		cout <<y[i][j];
//		cout<<setw(15);
//	}
//	cout<<"\n";
//}
double h, fx, p,sum ,tt=1.0;
cout <<"\n enter the value of x at which vlaue of y to be calculated \n";
cin>>fx;
h=x[1]-x[0]; // h is the difference between 2nd value of x and 1st value of x
p=(fx-x[n-1])/h; // p is the value of x that is given and (x[n-1]) is the last x value on the table 
sum=y[n-1][0]; // sum is the initial value value of y 
for (j=1;j<n;j++){
	tt=tt*(p+j-1)/j;
	sum +=tt*y[n-1][j];
}
cout << "\n the value of y at x = 38 \n \n";
cout <<"y("<< fx<< ")="<<sum ;
return 0 ;
}

//Enter the number of values to be entered.
//6
//Enter the values of x
//15 20 25 30 35 40
//Enter the values of y
//0.2588190 0.3420201 0.4226183 0.5 0.5735764 0.6427876

//Enter the value of x at which the value of y to be calculated
//38

//Y (38.00000)=0.61566
