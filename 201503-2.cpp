#include<iostream>
#include<algorithm>
using namespace std;

struct num{
	int number;
	int count=0;
};

bool cmp(num n1,num n2){		// �������� �Ȱ����ֵĴ������� �� ��ֵ��С���� 
	if(n1.count!=n2.count){
		return n1.count>n2.count;
	}
	else {
		return n1.number<n2.number;
	}
}

int main(){
	int n,array[1001]={0},buff,nums=0;
	cin>>n;
	for(int i=0;i<n;i++){		// Ͱ���� ������� ���ֵĴ��� 
		cin>>buff;
		array[buff]++;
	}
	for(int i=0;i<1001;i++){		// ��� �ж����鲻ͬ������ 
		if(array[i]!=0){
			nums++;
		}
	}
	num N[nums];
	int sign=0;
	for(int i=0;i<1001;i++){		// ����ֵ ���� ����ָ�������ݽṹ�� 
		if(array[i]!=0){
			N[sign].count=array[i];
			N[sign].number=i;
			sign++;
		}
	}
	
	sort(N,N+nums,cmp);		//���������� 
	for(int i=0;i<nums;i++){
		cout<<N[i].number<<" "<<N[i].count<<endl;
	}
	
	
	return 0;
} 
