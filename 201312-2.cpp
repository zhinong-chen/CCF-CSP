#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	int sign,sum=0,buff[11]={0},count=1;
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(str[i]!='-'){
			buff[count]=int(str[i])-48;		// char תint �õ�����ascii��  �������Ǵ�48��ʼ 
			count++;
		}
	}
	
	for(int i=1;i<=9;i++)
		sum+=i*buff[i];
		
	sign=sum%11;
	if(sign == buff[10] ||(sign==10 && buff[10]==40)){	//��д��ĸ X�� asciiΪ88 ��Ϊǰ����� 48 ����������40 
		cout<<"Right";
	} 
	else{
		if(sign==10)		//���������10 �����X ����������� 
			str[str.length()-1]='X';
		else
			str[str.length()-1]=char(sign+48);
		cout<<str;
	}
	
	
	
	
	
	return 0;
} 
