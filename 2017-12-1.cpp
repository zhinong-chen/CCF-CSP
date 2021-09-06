#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
	int n,a,min=20000;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	sort(array,array+n);
	for(int i=1;i<n;i++){
		if(abs(array[i]-array[i-1])<min){
			min=abs(array[i]-array[i-1]);
		}
	}
	cout<<min;
	
	
	return 0;
} 
