#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main (){
	int n,i,j,k;
	cout.precision(4);
	cout.setf(ios::fixed);
	a:cout<<"\n enter the size of system \n"<<endl;
	cin>>n;
	double a[n][n+1],x[n];
	cout<<"Enter the element of system co-efficiends row wise "<<endl;
	for(i=0;i<n;i++)
	for(j=0;j<=n;j++)
	cin>>a[i][j];
	//pivotisation
	for(i=0;i<n;i++)
		for(k=i+1;k<n;k++){
			if(abs(a[i][i])<abs(a[k][i])){
			for(j=0;j<=n;j++){
			double temp=a[i][j];
			a[i][j]=a[k][j];
			a[k][j]=temp;
		}
			}
		}
	cout<<"The matrix after pivotaisation"<<endl;
	for(i=0;i<n;i++)
	 {
	for(j=0;j<=n;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
	}
	
	//Gaussian elimination
	for(i=0;i<n;i++)
		 {
		 for(k=i+1;k<n;k++)
		 {
		 double t=a[k][i]/a[i][i];
		 for(j=0;j<=n;j++)
		 a[k][j]=a[k][j]-t*a[i][j];
		 }
		 }

	cout<<"\n the new matrix after gauss elimination \n"<<endl;
	
	for (i=0;i<n;i++){
		for(j=0;j<=n;j++)
		cout<<a[i][j]<<setw(16);
		cout<<"\n";
	}
	for(i=n-1;i>=0;i--)
	if(a[i][i]==0){
		
 cout<<"Inconsistency detected, calculation another system"<<endl;
 goto a;
	}
	
	//back substitution
	
	for(i=n-1;i>=0;i--){
		x[i]=a[i][n];
		for (j=i+1;j<n;j++){
			if(j!=i)
			x[i]=x[i]-a[i][j]*x[j];
		}
		x[i]=x[i]/a[i][i];
	}
	cout<<"Values"<<endl;
	for(i=0;i<n;i++)
	cout<<x[i]<<endl;
	
	
}

//Enter the size of system
// 3
//Enter the elements of system co efficients row wise
// 2 1 1 10
// 3 2 3 18
// 1 4 9 16

//Output
//7.0000
//-9.0000
//5.0000