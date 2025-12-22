#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int n,i,j,k;
	cout.precision(4);
	cout.setf(ios::fixed);
	a:cout<<"\n enter the size of the system \n";
	cin>>n;
	double a[n][n+1],x[n];
	cout<<"\n Enter the element of the system co-efficiend row wise "<<endl;
	for(i=0;i<n;i++)
	for(j=0;j<=n;j++)
	 cin>>a[i][j];
	 
	 // pre
	 for(i=0;i<n;i++)
		 for(k=i+1;k<n;k++){
		 	if(abs(a[i][i])<abs(a[i][k])){
		 		for(j=0;j<n;j++){
		 				double temp=a[i][j];
		 				a[i][j]=a[k][j];
		 				a[k][j]=temp;
				 }
		 	
			 }
		 }
	cout<<"\n Matrix after pevotiasation \n";
	for(i=0;i<n;i++){
		for(j=0;j<=n;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;	
	}
	//gaussian
	for(i=0;i<n;i++){
		for(k=i+1;k<=n;k++){
		double tt=a[k][i]/a[i][i];
		for (j=0;j<n;j++){
			a[k][j]=a[k][j]-tt*a[i][j];
		}	
		}
	}
	
	cout << "\n New matrix after gaussian elimination \n";
	for (i=0;i<n;i++){
		for(j=i+1;j<=n;j++)
		cout<<a[i][j]<<"  ";
		cout<<endl;
	}
	for(i=n-1;i>=0;i--)
	if(a[i][i]==0){
		
 cout<<"Inconsistency detected, calculation another system"<<endl;
 goto a;
 }
 	//back substitution
 	
 	for(i=n-1;i>=n;i--){
 		x[i]=a[i][n];
 		 for (j=i+1;j<n;j++){
 		 	if(i!=j)
 		 	x[i]=x[i]-a[i][j]*x[j];
		  }
		  x[i]=x[i]/a[i][i];
	 }
 	cout<<"Values"<<endl;
	for(i=0;i<n;i++)
	cout<<x[i]<<endl;
 

}