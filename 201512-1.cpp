#include<iostream>
using namespace std;

int main(){
	int sum=0,n;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++){
		sum+=(int(str[i])-48);		//字符转 整型 的值为ASCII  数值是从 48位置开始的 
	}
	cout<<sum;
	return 0;
} 
