#include<iostream>
using namespace std;

int main(){
	int n,k,count=0,sum=0,buff;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>buff;
		sum+=buff;
		if(sum>=k){
			sum=0;
			count++;
		}
		else if(sum<k && i==n-1){
			count++;
		}	
	}
	cout<<count;
	return 0;
}
