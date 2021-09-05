#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,buff,a,max=0;
	cin>>n;
	cin>>buff;
	for(int i=1;i<n;i++){
		cin>>a;
		if(abs(a-buff)>max){
			max=abs(a-buff);
		}
		buff=a;
	}
	cout<<max;
	return 0;
} 
