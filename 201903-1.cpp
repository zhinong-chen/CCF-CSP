#include<iostream>
#include<iomanip>	//调用该库可调整输出的位数 
using namespace std;	

int main(){
	long n,max,min,mid1;
	double mid2;
	cin>>n;
	long array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	if(array[0]>=array[n-1]){
		max=array[0];
		min=array[n-1];
	}
	else{
		min=array[0];
		max=array[n-1];
	}
	
	if(n%2==0){
		mid1=(array[n/2]+array[n/2-1])/2;
		mid2=(double(array[n/2]+array[n/2-1])/2);
	}
	else if(n%2==1){
		mid1=array[n/2];
		mid2=array[n/2];
	}
	
	cout<<max<<" ";
	if(mid1!=mid2){		//判断 中位数是以整数输出还是以浮点数输出 
		cout<<fixed<<setprecision(1)<<mid2;		//保留一位小数 
		cout<<" "<<int(min);
	}
	else 
		cout<<mid1<<" "<<min;
	
	return 0;
} 
