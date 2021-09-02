#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	int sign,sum=0,buff[11]={0},count=1;
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(str[i]!='-'){
			buff[count]=int(str[i])-48;		// char 转int 得到的是ascii码  而数字是从48开始 
			count++;
		}
	}
	
	for(int i=1;i<=9;i++)
		sum+=i*buff[i];
		
	sign=sum%11;
	if(sign == buff[10] ||(sign==10 && buff[10]==40)){	//大写字母 X的 ascii为88 因为前面减了 48 所以这里是40 
		cout<<"Right";
	} 
	else{
		if(sign==10)		//余数如果是10 则添加X 否则就是数字 
			str[str.length()-1]='X';
		else
			str[str.length()-1]=char(sign+48);
		cout<<str;
	}
	
	
	
	
	
	return 0;
} 
