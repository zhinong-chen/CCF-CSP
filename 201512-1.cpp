#include<iostream>
using namespace std;

int main(){
	int sum=0,n;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++){
		sum+=(int(str[i])-48);		//�ַ�ת ���� ��ֵΪASCII  ��ֵ�Ǵ� 48λ�ÿ�ʼ�� 
	}
	cout<<sum;
	return 0;
} 
