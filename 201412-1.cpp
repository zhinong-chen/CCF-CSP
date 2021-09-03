#include<iostream>
using namespace std;

int main(){
	int n,count[1001]={0},buff;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>buff;
		count[buff]++;
		cout<<count[buff]<<" ";
	}
	return 0;
} 
