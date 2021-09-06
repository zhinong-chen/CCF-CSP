#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	if(n>2){
		cout<<(array[0]+array[1])/2<<" ";
		for(int i=1;i<n-1;i++){
			cout<<(array[i-1]+array[i]+array[i+1])/3<<" ";
		}
		cout<<(array[n-2]+array[n-1])/2;
	}
	else{
		cout<<(array[0]+array[1])/2<<" "<<(array[0]+array[1])/2;
	}
	
	return 0;
} 
