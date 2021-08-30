#include<iostream>
using namespace std ;


int main(){
	int n,m,L,d;
	cin>>n>>m>>L;
	int data[L]={0};
	for(int i=1;i<=n*m;i++){
		cin>>d;
		data[d]++;
	}
	for(int i=0;i<L;i++)
		cout<<data[i]<<" ";
	
}
