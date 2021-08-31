#include<iostream>
using namespace std;

int main(){
	int n,sum=0,wi,scorei;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>wi>>scorei;
		sum+=wi*scorei;
	}
	(sum<0?sum=0:sum);
	cout<<sum;

	return 0;
} 
