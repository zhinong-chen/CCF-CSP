#include<iostream>
using namespace  std;

int main(){
	int N,M,lostsum=0,allsum=0,lostnumber=0,buff,lostsign=0,max=100;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>buff;
		allsum+=buff;
		lostsign=0;
		for(int j=0;j<M;j++){
			cin>>buff;
			lostsign+=buff;
		}
		if(lostsign<max){
			max=lostsign;
			lostnumber=i+1;
		}
		lostsum+=lostsign;
	}
	cout<<allsum+lostsum<<" "<<lostnumber<<" "<<(0-max);
	
	return 0;
} 
