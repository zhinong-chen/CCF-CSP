#include<iostream>

using namespace std;

int main(){
	int n,max=0,min=0,buff,befor=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>buff;
		max+=buff;
		if(buff>befor){
			min+=buff;
		}
		befor=buff;
	}
	cout<<max<<"\n"<<min;
	
} 
//题解：最大值为每一个数组元素之和，最小元素是数组元素内不同值之和 
