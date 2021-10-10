#include<iostream>
using namespace std;

int main(){
	int n,r,y,g,sum=0,k,t;
	cin>>r>>y>>g;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>k>>t;
		if(k==0){
			sum+=t;
		}
		else if(k==1){
			sum+=t;
		}
		else if(k==2){
			sum+= t+r;
		}
	}
	cout<<sum;
	
	return 0;
}
 
 // 题解 红绿灯顺序 绿-黄-红 绿的不计算时间，黄的计算当前时间和红的总时间，红的计算当前剩余时间 
