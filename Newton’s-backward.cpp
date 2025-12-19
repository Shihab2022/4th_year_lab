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

//table
for (j=1;j<n;j++){
	k++;
	for(i=k;i<n;i++){
		y[i][j]=y[i][j-1]-y[i-1][j-1];
	}
}
cout<<"\n The Backward Difference Table is as follows :\n\n";
cout <<"x"<<setw(15)<<"y"<<setw(15);
for (i=1;i<n;i++)
cout <<"y"<<i<<setw(15);
cout <<"\n------------------------------------------------\n";
for (i=0;i<n;i++){
	cout <<x[i]<<setw(15);
	for (j=0;j<=i;j++){
		cout <<y[i][j];
		cout<<setw(15);
	}
	cout<<"\n";
}
double h, fx, p,sum ,tt=1.0;
cout <<"\n enter the value of x at which vlaue of y to be calculated \n";
cin>>fx;
h=x[1]-x[0];
p=(fx-x[n-1])/h;
sum=y[n-1][0];
for (j=1;j<n;j++){
	tt=tt*(p+j-1)/j;
	sum +=tt*y[n-1][j];
}
cout << "\n the value of y at x = 38 \n \n";
cout <<"y("<< fx<< ")="<<sum ;
return 0 ;
}