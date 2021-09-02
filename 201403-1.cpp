#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int N,array[1001]={0},buff,count=0;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>buff;
		array[abs(buff)]++;
	}
	for(int i=1;i<=1000;i++){
		if(array[i]>=2){
			count++;
		}
	}
	cout<<count;
	return 0;
} 
