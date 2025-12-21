#include<ipstream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	cout.precision(4);
	cout.setf(ios::fixed);
	int k,i,j,n;
	cout<<"\n Enter the no. of equations \n";
	cin>>n;
	double a[n][n+1];
	double x[n];
	double x1[n];
	double r[n];
	double eps,temp;
	cout<<"\n Enter the elements of the arguments matirx row-wise : \n";
	for (i=0;i<n;i++)
}