#include<iostream>
#include<iomanip>	//���øÿ�ɵ��������λ�� 
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
	if(mid1!=mid2){		//�ж� ��λ������������������Ը�������� 
		cout<<fixed<<setprecision(1)<<mid2;		//����һλС�� 
		cout<<" "<<int(min);
	}
	else 
		cout<<mid1<<" "<<min;
	
	return 0;
} 
