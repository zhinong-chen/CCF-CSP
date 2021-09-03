#include<iostream>
using namespace std;

int main(){
	int n,a,count=0,buff=-1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a!=buff){
			count++;
			buff=a;
		} 
	}
	cout<<count;
	
	return 0;
} 
