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
 
 // ��� ���̵�˳�� ��-��-�� �̵Ĳ�����ʱ�䣬�Ƶļ��㵱ǰʱ��ͺ����ʱ�䣬��ļ��㵱ǰʣ��ʱ�� 
