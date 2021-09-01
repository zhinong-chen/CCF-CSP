#include<iostream>
using namespace std;

int main(){
	int n,array[10001]={0},buff,max=0,number=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>buff;
		array[buff]++;
	}
	for(int i=1;i<=10001;i++){
		if(max<array[i]){
			max=array[i];
			number=i;
		}
	}
	cout<<number;
		
	
	return 0;
} 
